#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double const PI = 3.14159265359;
    double r{}, R{};
    int m{}, c{};
    while(true){
        cin >> r >> m >> c;
        if(r==0&&m==0&&c==0) return 0;
        cout << fixed << setprecision(20) << r*r*PI << ' ' << 4*r*r*c/m << endl;
    }
}