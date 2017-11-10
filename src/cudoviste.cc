#include <iostream>

using namespace std;

int main(){
    int r{}, c{}, car0{}, car1{}, car2{}, car3{}, car4{}, sum{};
    cin >> r >> c;
    char city[c][r], temp{};
    for(int y{}; y<r; ++y){
        for(int x{}; x<c; ++x){
            cin >> temp;
            city[x][y] = temp;
        }
    }
    for(int y{}; y<r-1; ++y){
        for(int x{}; x<c-1; ++x){
            sum=city[x][y]+city[x+1][y]+city[x][y+1]+city[x+1][y+1];
            switch(sum){
                case(184):
                    ++car0;
                    break;
                case(226):
                    ++car1;
                    break;
                case(268):
                    ++car2;
                    break;
                case(310):
                    ++car3;
                    break;
                case(352):
                    ++car4;
                    break;
                default:
                    break;
            }
        }
    }
    cout << car0 << endl << car1 << endl << car2 << endl << car3 << endl << car4 << endl;
}