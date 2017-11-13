#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int m = ceil((double)n/2);
    cout << n << ':' << endl;
    for(int i{2}; i<=m; ++i){
        if(n%(2*i-1)==i || n%(2*i-1)==0) cout << i << ',' << i-1 << endl; 
        if(n%i==0) cout << i << ',' << i << endl;
    }
}