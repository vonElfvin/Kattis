#include <iostream>

using namespace std;

int main(){
    int D{}, M{}, days{};
    cin >> D >> M;
    for(int i{1}; i<=M-1;++i){
        if(i==2){
            days += 28;
        }else if(i<=7){
            if(i%2==1){
                days += 31;
            }else{
                days += 30;
            }
        }else{
            if(i%2==0){
                days += 31;
            }else{
                days += 30;
            }
        }
    }
    days += D;
    switch(days%7){
        case(1):
            cout << "Thursday" << endl;
        break;
        case(2):
            cout << "Friday" << endl;
            break;
        case(3):
            cout << "Saturday" << endl;
            break;
        case(4):
            cout << "Sunday" << endl;
            break;
        case(5):
            cout << "Monday" << endl;
            break;
        case(6):
            cout << "Tuesday" << endl;
            break;
        case(0):
            cout << "Wednesday" << endl;
            break;
}
}