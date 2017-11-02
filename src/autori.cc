#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string result{}, input{};
    getline(cin, input);
    for(char const c : input){
        if(isupper(c)){
            result+=c;
        }
    }
    cout << result;
}