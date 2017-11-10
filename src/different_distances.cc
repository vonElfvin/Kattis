#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x1{}, y1{}, x2{}, y2{}, p{};
    while(true){
        cin >> x1;
        if(x1==0) return 0;
        cin >> y1 >> x2 >> y2 >> p;
        cout << fixed << setprecision(20) << pow(pow(abs(x1-x2),p)+pow(abs(y1-y2),p),1/p) << endl;
    }
}