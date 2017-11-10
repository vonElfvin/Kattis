#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n{};
    double x{}, y{}, h1{}, h2{}, v{}, v1{}, v2{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> x >> y;
        h1 = (x+y)/6-sqrt((x+y)*(x+y)/36-x*y/12);
        h2 = (x+y)/6+sqrt((x+y)*(x+y)/36-x*y/12);
        v1 = (x-2*h1)*(y-2*h1)*h1;
        v2 = (x-2*h2)*(y-2*h2)*h2;
        v = max(v1, v2);
        cout << fixed << setprecision(20) << v << endl;
    }
}