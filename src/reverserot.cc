#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string const alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ_."};
    int rot{};
    string msg{};
    while(1){
        cin >> rot;
        if(rot==0) break;
        cin >> msg;
        reverse(msg.begin(), msg.end());
        for(char & c : msg){
            auto index = alphabet.find_first_of(c);
            c = alphabet.at((index+rot)%28);
        }
        cout << msg << endl;
    }
}