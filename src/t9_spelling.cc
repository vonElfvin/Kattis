#include <iostream>
#include <map>

using namespace std;

map<char, string> t9 = {
    {'a', "2"},
    {'b', "22"},
    {'c', "222"},
    {'d', "3"},
    {'e', "33"},
    {'f', "333"},
    {'g', "4"},
    {'h', "44"},
    {'i', "444"},
    {'j', "5"},
    {'k', "55"},
    {'l', "555"},
    {'m', "6"},
    {'n', "66"},
    {'o', "666"},
    {'p', "7"},
    {'q', "77"},
    {'r', "777"},
    {'s', "7777"},
    {'t', "8"},
    {'u', "88"},
    {'v', "888"},
    {'w', "9"},
    {'x', "99"},
    {'y', "999"},
    {'z', "9999"},
    {' ', "0"},
};

int main(){
    int n{}, counter{};
    char prev{};
    string s{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        ++counter;
        cout << "Case #" << counter <<": ";
        for(char const c : s){
            if(t9[c][0] == prev) cout << ' ';
            cout << t9[c];
            prev=t9[c][0];
        }
        cout << endl;
    }
}