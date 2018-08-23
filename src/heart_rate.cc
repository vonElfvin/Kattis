#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n{}, b{};
    double p{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> b >> p;
        cout << fixed << setprecision(4);
        cout << 60 * (b-1) / p << ' ';
        cout << 60 * b / p << ' ';
        cout << 60 * (b+1) / p << endl;
    }
}