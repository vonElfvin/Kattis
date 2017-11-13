#include <iostream>

using namespace std;

int main(){
    int a{}, b{}, c{}, counter{}, temp{};
    cin >> a >> b >> c;
    while(b-a!=1 || c-b!=1){
        if(b-a>c-b){
            temp = b;
            b = b-1;
            c = temp;
        }else{
            temp = b;
            b = b +1;
            a = temp;
        }
        ++counter;
    }
    cout << counter << endl;
}