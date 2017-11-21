#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{};
    string s{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> s;
        int size = s.size();
        int root = sqrt(size);
        for(int x{root-1}; x>=0; --x){
            for(int y{0}; x+y<size; y+=root){
                cout << s.at(x+y);
            }
        }
        cout << endl;
    }
}