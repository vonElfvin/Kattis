#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{}, m{}, guest{};
    cin >> n;
    for(int i{1}; i<=n; ++i){
        cin >> m;
        vector<int> guests{};
        for(int j{}; j<m; ++j){
            cin >> guest;
            auto search = find(guests.begin(), guests.end(), guest);
            if(search != guests.end()){
                guests.erase(remove(guests.begin(), guests.end(), guest));
            }else{
                guests.push_back(guest);
            }
        }
        cout << "Case #" << i << ": " << guests.front() << endl;
    }
}