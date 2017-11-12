#include <iostream>

using namespace std;

int main(){
    char c{}, prev{};
    cin >> prev;
    while(cin.peek()!='\n' && cin >> c){
        if(c =='s' && prev==c){
            cout << "hiss";
            return 0;
        }
        prev = c;
    }
    cout << "no hiss";
    return 0;
}