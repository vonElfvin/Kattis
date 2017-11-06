#include <iostream>

using namespace std;

int main(){
    double gunnar{}, emma{}, a1{}, b1{}, a2{}, b2{};
    cin >> a1 >> b1 >> a2 >> b2;
    gunnar = (a1+b1)/2+(a2+b2)/2;
    cin >> a1 >> b1 >> a2 >> b2;
    emma = (a1+b1)/2+(a2+b2)/2;
    if(gunnar<emma){
        cout << "Emma" << endl;
    }else if(gunnar==emma){
        cout << "Tie" << endl;
    }else{
        cout << "Gunnar" << endl;
    }
}