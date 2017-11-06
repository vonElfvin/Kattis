#include <iostream>

using namespace std;

int main(){
    int long long n{}, m{};
    while(true){
        cin >> n >> m;
        if(n==0&&m==0){
            return 0;
        }
        cout << (n-n%m)/m << ' ' << n%m << " / " << m << endl;
    }
}