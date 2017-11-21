#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int main(){
    int x{}, result{};
    cin >> x;
    if(isPrime(x)){
        cout << 1 << endl;
        return 0;
    }
    for(int i{2}; i<=x; ++i){
        if(x%i==0){
            ++result;
            x/=i;
            --i;
        }
    }
    cout << result << endl;
}