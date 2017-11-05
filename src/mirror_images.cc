#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n{}, x{}, y{};
    string s{};
    cin >> n;
    for(int i{1}; i<=n; ++i){
        cin >> y >> x;
        cin.ignore();
        string lines[y];
        for(int j{}; j<y; ++j){
            getline(cin, s);
            reverse(s.begin(), s.end());
            lines[y-j-1] = s;
        }
        cout << "Test " << i << endl;
        for(string const line : lines){
            cout << line << endl;
        }
    }
}