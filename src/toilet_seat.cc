#include <iostream>

using namespace std;

int main(){
    char curr{}, prev{}, init{};
    int up{}, down{}, same{};
    cin >> init;
    prev = init;
    while(cin.peek()!='\n' && cin >> curr){
        // same
        if(curr!=prev) ++same;
        // init
        if(init=='U') ++down;
        if(init=='D') ++up;
        if(prev=='D' && curr=='U') down+=2;
        if(prev=='U' && curr=='D') up+=2;
        if(init=='#'){
            if(prev=='U' && curr=='U') down+=2;
            if(prev=='D' && curr=='D') up+=2;
        }
        prev = curr;
        if(init!='#'){
            init='#';
            continue;
        }
    }
    cout << up << endl << down << endl << same << endl;
}