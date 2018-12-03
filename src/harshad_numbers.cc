#include <iostream>

using namespace std;

bool is_harshad(int n) {
    int sum{}, num{n};
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return n % sum == 0;
}

int main() {
    int n{};
    cin >> n;
    for(int i{n}; i <= 1000000000; ++i) {
        if (is_harshad(i)){
            cout << i << endl;
            return 0;
        }
    }
}