#include <iostream>

using namespace std;

int main(){
    int n{};
    string s1{}, s2{};
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s1);
        getline(cin, s2);
        int size{s1.size()};
        cout << s1 << endl;
        cout << s2 << endl;
        for(int j{}; j<size; ++j){
            if(s1.at(j)==s2.at(j)){
                cout << '.';
            }else{
                cout << '*';
            }
        }
        cout << endl << endl;
    }
}