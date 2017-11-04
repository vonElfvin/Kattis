#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n{};
    double c{}, w{}, l{}, result{};
    cin >> c >> n;
    for(int i{}; i<n; ++i){
        cin >> w >> l;
        result += w*l*c;
    }
    cout << setprecision(9) << result << endl;
}