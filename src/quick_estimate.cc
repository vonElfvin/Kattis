#include <iostream>

using namespace std;

int main(){
    int n{};
    string s{};

    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        cout << s.size() << endl;
    }
}