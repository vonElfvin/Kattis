#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string number{};
    getline(cin, number);
    int original{stoi(number)};
    long int best{INT_FAST16_MAX};
    do{
        if(stoi(number)<best && stoi(number)>original) best = stoi(number);
    }while(next_permutation(number.begin(), number.end()));
    if(best==INT_FAST16_MAX) cout << 0;
    else cout << best;
    cout << endl;
}