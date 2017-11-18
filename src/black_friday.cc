#include <iostream>
#include <map>

using namespace std;

int main(){
    int n{}, temp{};
    map<int, int> rolls{};
    map<int, int> roller{};
    cin >> n;
    for(int i{1}; i<=n; ++i){
        cin >> temp;
        rolls[temp]++;
        roller[temp] = i;
    }
    for(int i{6}; i>0; --i){
        if(rolls[i]==1){
            cout << roller[i] << endl;
            return 0;
        }
    }
    cout << "none" << endl;
}
