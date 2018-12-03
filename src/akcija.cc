#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N{};
    cin >> N;

    vector<int> numbers{};
    int C{};
    for (int i{}; i < N; ++i) {
        cin >> C;
        numbers.push_back(C);
    }
    
    // sort in descending order
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    // group with top 3 most expensive in a group, with the 3rd most expensive for free, etc.
    int sum{}, i{};
    for (; i + 2 < N; i+=3) {
       sum += numbers[i];
       sum += numbers[i+1];
    }

    // add remaining 1-2 items to sum
    for (; i < N; ++i) {
        sum += numbers[i];
    }

    cout << sum << endl;
}