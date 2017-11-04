#include <iostream>

using namespace std;

int main(){
    int R{}, C{}, Zr{}, Zc{};
    cin >> R >> C >> Zr >> Zc;
    cin.ignore();
    string s{};
    for(int i{}; i<R; ++i){
        getline(cin, s);
        for(int y{}; y<Zr; ++y){
            for(char const c : s){
                for(int x{}; x<Zc; ++x){
                    cout << c;
                }
            }
            cout << endl;
        }
    }
}