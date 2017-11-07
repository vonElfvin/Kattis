#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{}, m{}, k{};
    string s{};
    cin >> n >> m >> k >> s;
    for(int i{}; i<3; ++i){
        if(s.at(i)=='A'){
            cout << min(n,min(m,k));
        }else if(s.at(i)=='B'){
            cout << min(max(n,min(k,m)),max(min(n,m),k));
        }else{
            cout << max(n,max(m,k));
        }
        if(i<2){
            cout << ' ';
        }
    }
}