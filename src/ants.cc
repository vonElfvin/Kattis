#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N{};
    cin >> N;

    int l{}, n{};
    for(int i{}; i < N; ++i) {
        cin >> l >> n;

        int shortest{}, longest{}, distance{};
        for(int j{}; j < n; ++j) {
            cin >> distance;
            shortest = max(min(distance, l - distance), shortest);
            longest = max(max(distance, l - distance), longest);
        }
        
        cout << shortest << ' ' << longest << endl;
    }
}