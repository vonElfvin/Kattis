#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    int n{}, m{};
    string temp;
    
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> m;
        unordered_set<string> us;
        for(int j{}; j<m; ++j){
            cin >> temp;
            us.insert(temp);
        }
        cout << us.size() << endl;
    }
}
