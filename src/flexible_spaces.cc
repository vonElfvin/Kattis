#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int w{}, n{}, temp{};
    cin >> w >> n;
    vector<int> p(n);
    for(int i{}; i<n; ++i){
        cin >> temp;
        p.push_back(temp);
    }

    set<int> spaces{};
    for(auto it=p.begin(); it!=p.end(); ++it){
        spaces.insert(*it);
        spaces.insert(w-*it);
        for(auto it2=it+1; it2!=p.end(); ++it2){
            spaces.insert(*it2-*it);
        }
    }

    for(auto it=next(spaces.begin()); it!=spaces.end(); ++it){
        cout << *it << endl;
    }
}