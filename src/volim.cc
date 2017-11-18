#include <iostream>

using namespace std;

int main(){
    int p{}, n{}, t{}, passed{};
    char answer{};
    cin >> p >> n;
    cin.ignore();
    while(cin.peek()!='\n' && cin >> t >> answer && passed+t < 210){
        passed += t;
        if(answer=='T') ++p;
        if(p>8) p-=8;
        cin.ignore();
    }
    cout << p << endl;
}