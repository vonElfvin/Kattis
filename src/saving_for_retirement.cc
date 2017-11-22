#include <iostream>

using namespace std;

int main(){
    int b{}, br{}, bs{}, a{}, as{}, bob_saved{}, alice_saved{-1};
    cin >> b >> br >> bs >> a >> as;
    bob_saved = bs*(br-b);
    while(alice_saved<bob_saved){
        ++a;
        alice_saved += as;
    }
    cout << a << endl;
}