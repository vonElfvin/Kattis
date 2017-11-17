#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int c{}, n{}, temp{};
    cin >> c;
    for(int i{}; i<c; ++i){
        cin >> n;
        vector<int> grades{};
        for(int j{}; j<n; ++j){
            cin >> temp;
            grades.push_back(temp);
        }
        int sum{};
        for(int const i : grades){
            sum += i;
        }
        int average = sum/grades.size();
        int count{};
        for(int const i: grades){
            if(i>average) ++count;
        }
        cout << fixed << setprecision(3) << (double)count/(double)grades.size()*100 << '%' << endl;
    }
}