#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> i, pair<string, int> j){
    return i.second < j.second;
}

int main(){
    int n{}, r{};
    vector<pair<string, int>> cups;
    string s{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> s;
        try{
            r = stoi(s);
            cin >> s;
        }catch(exception e){
            cin >> r;
            r*=2;
        }
        cups.push_back(make_pair(s,r));
    }
    sort(cups.begin(), cups.end(), cmp);
    for(unsigned int i{}; i<cups.size(); ++i){
        cout << cups.at(i).first << endl;
    }
}