#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if(n%2 == 0 || n%3 ==0) return false;
    
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main(){
    int n{}, x;
    string s{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> x;
        vector<string> reps{};
        for(int j{2}; j<=x/2; j+=2){
            if(is_prime(j) && is_prime(x-j)){
                s = to_string(j)+'+'+to_string(x-j);
                reps.push_back(s);
            }
            if(j==2)--j;
        }
        cout << x << " has " << reps.size() << " representation(s)" << endl;
        for(auto it = reps.begin(); it!=reps.end(); ++it){
            cout << *it << endl;
        }
        cout << endl;
    }
}