#include <iostream>
#include <set>

using namespace std;

void check(){
    string prev{}, curr{}, s{};
    int m{};
    cin >> m;
    set<string> numbers{};
    for(int j{}; j<m; ++j){
        cin >> s;
        numbers.insert(s);
    }
    prev = *numbers.begin();
    for(auto it=next(numbers.begin()); it!=numbers.end(); ++it){
        curr = *it;
        if(prev.size()<curr.size() && prev.compare(curr.substr(0, prev.size()))==0){
            cout << "NO" << endl;
            return;
        }
        prev = curr;
    }
    cout << "YES" << endl;
}

int main(){
    int n{};
    cin >> n;
    for(int i{}; i<n; ++i){
        check();
    }
}