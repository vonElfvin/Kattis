#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n{}, temp{}, sum{}, count{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> temp;
        if(temp!=-1){
            sum+=temp;
            ++count;
        }
    }
    cout << setprecision(10) << (double)sum/(double)count << endl;
}