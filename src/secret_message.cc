#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{}, k{};
    string s{};

    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        k = ceil(sqrt(s.size()));
        for(int j{}; j<k; ++j){
            for(int l{k-1}; l>=0; --l){
                if(k*l+j<s.size()){
                    cout << s.at(k*l+j);
                }
            }
        }
        cout << endl;
    }
}