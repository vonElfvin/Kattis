#include <iostream>

using namespace std;

int main(){
    int x{}, y{};
    cin >> x >> y;
    if((4*x+3*y)%2==0) cout << "possible" << endl;
    else cout << "impossible" << endl;
}