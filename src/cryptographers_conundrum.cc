#include <iostream>

using namespace std;

int main(){
    string s;
    int result{};
    getline(cin, s);
    for(unsigned int i{}; i<s.size(); ++i){
        if(i%3==0){
            if(s.at(i)!='P') ++result;
        }else if(i%3==1){
            if(s.at(i)!='E') ++result;
        }else{
            if(s.at(i)!='R') ++result;
        }
    }
    cout << result;
}