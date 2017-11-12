#include <iostream>

using namespace std;

int main(){
    int n{}, temp{}, case_count{1};

    while (cin.peek() != '\n' && cin >> n){
        int min{1000000}, max{-1000000};
        for(int i{}; i<n; ++i){
            cin >> temp;
            if(temp>max) max = temp;
            if(temp<min) min = temp;
        }
        cout << "Case " << case_count << ": " << min << ' ' << max << ' ' << max-min << endl;
        ++ case_count;
        cin.ignore();
    }
}

