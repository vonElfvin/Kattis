#include <iostream>
#include <bitset>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int x{};
    cin >> x;
    bitset<30> const bit(x);
    string s{bit.to_string()};
    int const count = 30-s.find('1');
    reverse(s.begin(), s.end());
    int result{};
    for(int i{0}; i<count; ++i){
        result += pow(2, count-i-1)*(static_cast<int>(s.at(i))-48);
    }
    cout << result << endl;
}