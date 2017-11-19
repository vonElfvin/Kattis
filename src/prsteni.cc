#include <iostream>
#include <cmath>

using namespace std;

double gcd(double const n, double const m){
    int limit = min(n,m);
    for(int i{limit}; i>0; --i){
        if((int)n%i==0&&(int)m%i==0) return (double)i;
    }
    return 1.0;
}

int main(){
    int n{};
    double prev{}, turns{1}, GCD{}, numerator{}, denominator{};
    cin >> n;
    cin >> prev;
    for(int i{1}; i<n; ++i){
        numerator = turns*prev;
        cin >> denominator;
        GCD = gcd(denominator, numerator);
        cout << numerator/GCD << '/' << denominator/GCD << endl;
        turns = numerator/denominator;
        prev = denominator;
    }
}