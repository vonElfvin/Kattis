#include <iostream>
#include <set>

using namespace std;

int main() {
    int p{}, n{}, k{};
    string s{};
    set<string> parts{};

    // number of parts, number of days
    cin >> p >> n;
    for (int i{}; i < n; ++i) {
        cin >> s;
        k++;
        parts.insert(s);
        if (parts.size() == p) {
            cout << k << endl;
            return 0;
        }
    }
    cout << "paradox avoided" << endl;
}