#include <iostream>

using namespace std;

int main(){
    int n{};
    string s{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        if(s.size()>11 && s.substr(0, 10) == "simon says"){
            cout << s.substr(11, s.size());
        }
        cout  << endl;
    }
}