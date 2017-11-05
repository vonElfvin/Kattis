#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a{}, b{}, c{}, d{};
    cin >> a >> b >> c >> d;
    int numbers[4] = {a,b,c,d};
    sort(begin(numbers), end(numbers));
    cout << numbers[0]*numbers[2];
}