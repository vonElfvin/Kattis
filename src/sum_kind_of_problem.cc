#include <iostream>

using namespace std;

int main(){
    int p{}, k{},n{};
    cin >> p;
    for(int i{}; i<p; ++i){
        cin >> k >> n;
        int all{}, odd{}, even{};
        for(int j{1}; j<=n; ++j){
            all += j;
        }
        for(int j{1}; j<=n*2-1; j+=2){
            odd += j;
        }
        for(int j{2}; j<=n*2; j+=2){
            even += j;
        }
        cout << k << ' ' << all << ' ' << odd << ' ' << even << endl;
    }
}