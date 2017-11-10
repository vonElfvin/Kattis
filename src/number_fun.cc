#include <iostream>

using namespace std;

int main(){
    int n{}, a{}, b{}, c{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> a >> b >> c;
        if(a*b==c) cout << "Possible" << endl;
        else if(a+b==c) cout << "Possible" << endl;
        else if(a%b==0 && a/b==c) cout << "Possible" << endl;
        else if(b%a==0 && b/a==c) cout << "Possible" << endl;
        else if(a-b==c) cout << "Possible" << endl;
        else if(b-a==c) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}