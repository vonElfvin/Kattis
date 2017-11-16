#include <iostream>
#include <cmath>

using namespace std;

int l{}, n{}, amount{}, current{}, result{};
string action{};

int main(){
    cin >> l >> n;
    for(int i{}; i<n; ++i){
        cin >> action >> amount;
        if(action=="enter"){
            if(current+amount>l) ++result;
            else current+=amount;
        }else{
            current -= amount;
        }
    }
    cout << result;
}