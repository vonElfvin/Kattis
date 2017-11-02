#include <iostream>

using namespace std;

int main(){
    int carrots{};
    cin >> carrots >> carrots;
    cin.ignore('\n', 256);
    cout << carrots;
}