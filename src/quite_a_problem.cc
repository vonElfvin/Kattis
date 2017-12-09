#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s{};
    while(getline(cin,s)){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s.find("problem") !=string::npos){
            cout << "yes";
        }else{
            cout << "no";
        }
        cout << endl;
    }
}