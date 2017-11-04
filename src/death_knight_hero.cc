#include <iostream>

using namespace std;

int main(){
    int n{};
    string s{};
    cin >> n;
    cin.ignore();
    int result{n};
    for(int i{}; i<n; ++i){
        getline(cin, s);
        char prev{};
        for(char const c : s){
            if(c=='D' && prev=='C'){
                --result;
                break;
            }
            prev = c;
        }
    }
    cout << result << endl;
}