#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{}, counter{};
    while(true){
        ++counter;
        string s{};
        cin >> n;
        if(n==0){
            break;
        }
        cin.ignore();
        string words[n];
        for(int i{}; i<n/2+n%2; ++i){
            getline(cin, s);
            words[i] = s;
            if(i<=n/2-n%2){
                getline(cin, s);
                words[n-i-1] = s;
            }
        }
        cout << "SET " << counter << endl;
        for(int i{}; i<n; ++i){
            cout << words[i] << endl;
        }
    }
    return 0;
}