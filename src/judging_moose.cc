#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int l{}, r{};
    cin >> l >> r;
    if(l==0&&r==0){
        cout << "Not a moose";
        return 0;
    }else if(max(l,r)!=l || max(l,r)!=r){
        cout << "Odd " << max(l,r)*2;
    }else{
        cout << "Even " << l*2;
    }
}