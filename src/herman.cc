#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n{};
    double const PI{3.14159265359};
    cin >> n;
    cout << fixed;
    cout << setprecision(10) << n*n*PI << endl;
    cout << setprecision(10) << n*n*2.0 << endl;
}