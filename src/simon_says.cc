#include <iostream>

using namespace std;

int main(){
    int n{};
    string s{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        if(s.substr(0, 10) == "Simon says"){
            cout << s.substr(10, s.size()) << endl;
        }
    }
}