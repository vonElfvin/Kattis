#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double get_price(double p, double a, double b, double c, double d, int k){
    return p*(sin(a*k+b)+cos(c*k+d)+2);
}

int main(){
    double p{}, a{}, b{}, c{}, d{}, n{}, result{}, pmin{HUGE_VAL}, pmax{-HUGE_VAL}, price{};
    cin >> p >> a >> b >> c >> d >> n;
    for(int k{1}; k<=n; ++k){
        price=get_price(p, a, b, c, d, k);
        if(price<pmin) pmin=price;
        if(price>pmax) {
            result = max(result, pmax-pmin);
            pmax=price;
            pmin=price;
        }
    }
    result = max(result, pmax-pmin);
    cout << fixed << setprecision(20) << result << endl;
}