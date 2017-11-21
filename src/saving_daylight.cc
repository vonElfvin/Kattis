#include <iostream>

using namespace std;

int main(){
    string month{};
    int day{}, year{}, h1{}, m1{}, h2{}, m2{};
    char temp{};
    while(cin.peek() != '\n' && cin >> month >> day >> year >> h1 >> temp >> m1 >> h2 >> temp >> m2){
        if(m2<m1){
            --h2;
            m2+=60;
        } 
        cout << month << ' ' << day << ' ' << year << ' ' << h2-h1 << " hours " << m2-m1 << " minutes" << endl;
        cin.ignore();
    }
}