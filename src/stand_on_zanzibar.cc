#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    for(int i{}; i<n; ++i){
        int result{}, prev{}, current{};
        cin >> prev;
        while(true){
            cin >> current;
            if(current==0) break;
            result += max(0,current-prev*2);
            prev = current;
        }
        cout << result << endl;
    }
}