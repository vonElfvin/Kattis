#include <iostream>

using namespace std;

int sum_of_digits(int i){
    int sum{};
    string s = to_string(i);
    for(char const c : s){
        sum += static_cast<int>(c)-48;
    }
    return sum;
}

int main(){
    int n{};
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int sum = sum_of_digits(n);
        int p{11};
        while(true){
            if(sum == sum_of_digits(p*n)){
                cout << p << endl;
                break;
            }
            ++p;
        }
    }
    return 0;
}