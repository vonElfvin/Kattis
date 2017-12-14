#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a{}, b{}, s{}, m{}, n{};
    double total{}, total_x{}, total_y{};
    double v{}, angle{};
    const double PI = 3.14159265359;
    while(true){
        cin >> a >> b >> s >> m >> n;
        if(a+b+s+m+n==0) break;
        total_x = a * m;
        total_y = b * n;
        total = sqrt(pow(total_x,2)+pow(total_y,2));
        v = (double)total/(double)s;
        if(total_x!=0) angle = atan(total_y/total_x)*180/PI;
        else angle=90;
        cout << fixed << setprecision(2) << angle << ' ' << v << endl;
    }
}