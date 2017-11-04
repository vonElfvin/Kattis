#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    string s{};
    unordered_set<string> strings{};
    while((cin.peek() != '\n') && (cin >> s)){
        // cout << s << endl;
        auto search = strings.find(s);
        if(search != strings.end()){
            cout << "no";
            return 0;
        }else{
            strings.insert(s);
        }
    }
    cout << "yes";
}