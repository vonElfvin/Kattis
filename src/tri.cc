#include <iostream>

using namespace std;

int main(){
    int a{}, b{}, c{};
    cin >> a >> b >> c;
    cout << a;
    if(a+b==c){
        cout << '+' << b << '=';
    }else if(a-b==c){
        cout << '-' << b << '=';
    }else if(a*b==c){
        cout << '*' << b << '=';
    }else if(a/b==c){
        cout << '/' << b << '=';
    }else if(a==b+c){
        cout << '=' << b << '+';
    }else if(a==b-c){
        cout << '=' << b << '-';
    }else if(a==b*c){
        cout << '=' << b << '*';
    }else{
        cout << '=' << b << '/';
    }
    cout << c;
}