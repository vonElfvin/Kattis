#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    string s{};
    while(getline(cin,s)){
        stringstream ss{s};
        string name{}, temp{};
        double d{}, sum{};
        int n{};
        while((int)ss.peek()>=65 && (int)ss.peek()<=90){
            ss >> temp;
            name += ' ' +  temp;
            ss.ignore();
        }
        while((int)ss.peek()>=48 && (int)ss.peek()<=57){
            ss >> d;
            sum+=d;
            ++n;
            ss.ignore();
        }
        while((int)ss.peek()>=65 && (int)ss.peek()<=90){
            ss >> temp;
            name += ' ' +  temp;
            ss.ignore();
        }
        cout << fixed << setprecision(6) << sum/n << name << endl;
    }
}