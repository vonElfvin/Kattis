#include <iostream>

using namespace std;

int main(){
    int n{};
    string prev{}, s{};
    bool decreasing{false}, increasing{false};
    cin >> n;
    cin.ignore();
    getline(cin, prev);
    for(int i{1}; i<n; ++i){
        getline(cin, s);
        if(!decreasing && s.compare(prev) <= 0){
            decreasing = true;
        }else if(!increasing && s.compare(prev) >= 0){
            increasing = true;
        }
        prev = s;
    }
    if(decreasing && increasing){
        cout << "NEITHER" << endl;
    }else if(decreasing){
        cout << "DECREASING" << endl;
    }else{
        cout << "INCREASING" << endl;
    }
}