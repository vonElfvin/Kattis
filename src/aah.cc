#include <iostream>

using namespace std;

int main(){
    string a{}, b{};
    getline(cin, a);
    getline(cin, b);
    if(a.size()<b.size()){
        cout << "no";
    }else{
        cout << "go";
    }
}