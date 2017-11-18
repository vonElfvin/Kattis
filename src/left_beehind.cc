#include <iostream>

using namespace std;

int main(){
    int x{}, y{};
    while(1){
        cin >> x >> y;
        if(x==0 && y==0) break;

        if(x+y==13){
            cout << "Never speak again.";
        }else if(x>y){
            cout << "To the convention.";
        }else if(x<y){
            cout << "Left beehind.";
        }else{
            cout << "Undecided.";
        }
        cout << endl;
    }
}