#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n{}, k{};
    long long int p{}, q{};
    char slash{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> k >> p >> slash >> q;
        int rows{}, result{};
        vector<int> rights{};
        while(p!=1 || q!=1){
            ++rows;
            if(p>q){
                p-=q;
                rights.push_back(1);
            }else if(p<q){
                q-=p;
                rights.push_back(0);
            }
        }
        for(int i{}; i<rows; ++i){
            if(rights.at(i)==1) result += pow(2, i);
        }
        result += pow(2,rows);
        cout << k << ' ' << result << endl;
    }
}