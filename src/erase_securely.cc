#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    n%=2;
    cin.ignore();
    string s1{}, s2{};
    getline(cin, s1);
    getline(cin, s2);
    int size{};
    size = s1.size();
    for(int i{}; i<size; ++i){
        if((n==0 && s1.at(i)!=s2.at(i))||(n==1 && s1.at(i)==s2.at(i))){
            cout << "Deletion failed" << endl;
            return 0;
        }
    }
    cout << "Deletion succeeded" << endl;
}