#include <iostream>
#include <unordered_set>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n{};
    string animal{}, goes{}, sound{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        string recording{};
        unordered_set<string> sounds{};
        getline(cin, recording);
        while(cin >> animal >> goes >> sound && goes!="does"){
            sounds.insert(sound);
        }
        cin.ignore('\n', 256);
        stringstream iss(recording);
        vector<string> words{};
        copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(words));
        for(auto it=words.begin(); it!=words.end(); ++it){
            if(sounds.find(*it)==sounds.end()){
                cout << *it << ' ';
            }
        }
    }
}