#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double D{}, V{}, d{}, v{};
    double const PI = 3.14159265359;
    while(true){
        cin >> D >> V;
        if(D==0&&V==0){
            return 0;
        }
        double B = (D/2)*(D/2)*PI;
        v = B*D-3*V/2;
        d = cbrt(4*v/PI);
        cout << fixed << setprecision(20) << d << endl;
    }
}