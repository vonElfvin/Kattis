#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string number{};
    getline(cin, number);
    int original{stoi(number)};
    long int best{9999999999};
    //stringstream ss{s};
    /*while(ss >> c){
        numbers.push_back(c-'0');
    }*/

    sort(number.begin(), number.end());
    do{
       if(stoi(number)<best && stoi(number)>original) best = stoi(number);
    }while(next_permutation(number.begin(), number.end()));
    if(best==9999999999) cout << 0;
    else cout << best;
    cout << endl;
}