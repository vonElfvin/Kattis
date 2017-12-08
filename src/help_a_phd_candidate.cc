#include <iostream>

using namespace std;

int main(){
    int n{}, a{}, b{};
    char c{'#'};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        if(cin.peek()=='P'){
            cout << "skipped";
        }else{
            cin >> a >> c >> b;
            cout << a+b;
        }
        cin.ignore(256, '\n');
        cout << endl;
    }
}