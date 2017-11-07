#include <iostream>

using namespace std;

int get_fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return get_fibonacci(n-1)+get_fibonacci(n-2);
}

int main(){
    int n{};
    cin >> n;
    if(n==0){
        cout << "0 0";
    }
    int a{0};
    int b{1};
    int c{};
    while(n-->1){
        c = b;
        b = b+a;
        a = c;
    }
    cout << a << ' ' << b;
}