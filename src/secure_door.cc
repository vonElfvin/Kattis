#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n{};
    string action{}, name{};
    unordered_map<string, string> log{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> action >> name;
        //getline(cin, name);
        cout << name << ' ';
        if(action=="entry") cout << "entered";
        if(action=="exit") cout << "exited";
        if(log[name]==action || (action=="exit" && log[name]!="entry")) cout << " (ANOMALY)";
        log[name] = action;
        cout << endl;
    }
}