#include <iostream>

using namespace std;

int get_digit_sum(int i){
    int sum{};
    while(i!=0){
        sum+=i%10;
        i/=10;
    }
    return sum;
}

int main(){
    int L{}, D{}, X{}, n{}, m{};

    cin >> L >> D >> X;
    int num{D-L};
    for(int i{0}; i<=num; ++i){
        if(!n && get_digit_sum(L+i)==X){
            n=L+i;
        }
        if(!m && get_digit_sum(D-i)==X){
            m=D-i;
        }
    }
    cout << n << endl << m << endl;
}