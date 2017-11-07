#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r{}, c{};
    double const PI{3.14159265359};
    cin >> r >> c;
    cout << fixed << setprecision(10) << ((r-c)*(r-c)*PI)/(r*r*PI)*100 << endl;
}