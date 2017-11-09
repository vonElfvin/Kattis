#include <iostream>

using namespace std;

int main(){
    int A{}, B{}, C{}, a1{}, a2{}, b1{}, b2{}, c1{}, c2{}, result{};
    cin >> A >> B >> C >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    for(int i{1}; i<=100; ++i){
        int current{};
        if(a1<=i&&i<a2) ++current;
        if(b1<=i&&i<b2) ++current;
        if(c1<=i&&i<c2) ++current;
        if(current==1) result+=current*A;
        if(current==2) result+=current*B;
        if(current==3) result+=current*C;
    }
    cout << result;
}