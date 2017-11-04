#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{};
    double v0{}, theta{}, x1{}, h1{}, h2{}, t{}, y{};
    const double g = 9.81;
    const double PI  =3.141592653589793238463;

    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> v0 >> theta>> x1 >> h1 >> h2;
        t = x1/(v0*cos(theta*PI/180));
        y = v0*t*sin(theta*PI/180)-0.5*g*t*t;
        if(h1+1<y && y<h2-1){
            cout << "Safe" << endl;
        }else{
            cout << "Not safe" << endl;
        }
    }
}