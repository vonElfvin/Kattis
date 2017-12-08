#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n{}, counter{0};
    string uni{}, team{};
    unordered_set<string> uni_set{};

    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> uni >> team;
        if(uni_set.find(uni) == uni_set.end()){
            uni_set.insert(uni);
            cout << uni << ' ' << team << endl;
            ++counter;
        }
        if(counter==12){
            while(cin >> uni){};
            break;
        }
    }
}