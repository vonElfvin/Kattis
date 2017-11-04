#include <iostream>

using namespace std;

int main(){
    string s, result{};
    getline(cin, s);
    char prev{};
    for(char const c : s){
        if(c != prev){
            result += c;
        }
        prev = c;
    }
    cout << result;
}