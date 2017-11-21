#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string s{};
    cin >> s;
    unordered_map<char, int> c_count{};
    for(auto it=s.begin(); it!=s.end(); ++it){
        c_count[*it]++;
    }
    int result{};
    for(auto it=c_count.begin(); it!=c_count.end(); ++it){
        result+=it->second%2;
    }
    if(result) --result;
    cout << result << endl;
}