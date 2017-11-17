#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int e{}, f{}, c{}, result{}, empty{};
    cin >> e >> f >> c;
    empty = e + f;
    while(empty >= c){
        result += empty/c;
        empty = empty%c+empty/c;
    }
    cout << result << endl;
}