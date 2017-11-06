#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n{};
    string s{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        string result{"abcdefghijklmnopqrstuvwxyz"};
        getline(cin, s);
        for(char const c : s){
            result.erase(remove(result.begin(), result.end(), tolower(c)), result.end());            
        }
        if(result.size()==0){
            cout << "pangram" << endl;
        }else{
            cout << "missing " << result << endl;
        }
    }
}