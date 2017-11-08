#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int temp{}, sum{}, numbers[9];
    for(int i{}; i<9; ++i){
        cin >> temp;
        numbers[i] = temp;
        sum += temp;
    }
    for(int i{}; i<8; ++i){
        for(int j{i+1}; j<9; ++j){
            if(sum-numbers[i]-numbers[j]==100){    
                for(int k{}; k<9; ++k){
                    if(k!=i && k!=j){
                        cout << numbers[k] << endl;
                    }
                }
            }
        }
    }
}