#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s{}, res{};
    cin >> s;
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (*it == '<' && !res.empty()) res.pop_back();
        else res.push_back(*it);
    }
    cout << res;
}