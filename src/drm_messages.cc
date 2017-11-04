#include <iostream>

using namespace std;

int main(){
    string s{}, left{}, right{};
    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n{}, left_sum{}, right_sum{}, temp{};
    getline(cin, s);
    n = s.size();
    
    // split
    left = s.substr(0, n/2);
    right = s.substr(n/2, n);

    // get sums
    for(int i{}; i<n/2; ++i){
        left_sum += left.at(i)-'A';
        right_sum += right.at(i)-'A';
    }

    // rotate
    for(char & c : left){
        temp = (c-'A'+left_sum)%26;
        c = alphabet.at(temp);
    }
    for(char & c : right){
        temp = (c-'A'+right_sum)%26;
        c = alphabet.at(temp);
    }

    //merge
    for(int i{}; i<n/2; ++i){
        temp = (left.at(i)+right.at(i))%26;
        left.at(i) = alphabet.at(temp);
    }

    cout << left << endl;
}