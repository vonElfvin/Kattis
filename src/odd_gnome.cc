#include <iostream>

using namespace std;

int main(){
    int n{}, m{};
    string s{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> m;
        int counter{1}, g{}, prev{};
        cin >> prev;
        for(int j{1}; j<m; ++j){
            cin >> g;
            ++counter;
            if(prev+1!=g){
                cout << counter << endl;
                getline(cin, s);
                break;
            }
            prev = g;
        }
    }
}