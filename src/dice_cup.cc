#include <iostream>

using namespace std;

int main(){
    int d1{}, d2{};
    cin >> d1 >> d2;
    for(int i{1}; i<=abs(d2-d1)+1; ++i){
        cout << min(d1,d2)+i << endl;
    }
}