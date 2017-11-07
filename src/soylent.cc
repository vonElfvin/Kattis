#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{};
    double d{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> d;
        cout << ceil(d/400) << endl;
    }
}