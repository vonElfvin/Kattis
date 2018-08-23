#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int to_int(char c) {
    return c - '0';
}

char to_char(int i) {
    return i + '0';
}

string get_sum(string s1, string s2) {

    // setup addition
    int n1 = s1.length();
    int n2 = s2.length();
    int n = max(n1, n2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    // perform addition
    string result{};
    int rest {};
    for (int i = 0; i <= n; ++i) {
        // add
        int value{};
        if (i < n1) value += to_int(s1[i]);
        if (i < n2) value += to_int(s2[i]);
        value += rest;

        // rest
        if (value >= 10) {
            value %= 10;
            rest = 1;
        } else rest = 0;

        // result
        if (i < n || value != 0) result.push_back(to_char(value));
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    string s1{}, s2{}; // hande numbers using string objects
    cin >> s1 >> s2;
    cout << get_sum(s1, s2) << endl;
}