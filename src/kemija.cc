#include <iostream>

using namespace std;

bool is_vowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
}

int main(){
    string s{}, result{};
    bool can_skip = false;
    getline(cin, s);
    for(int i{0}; i<s.size(); ++i){
        if(can_skip && i<s.size()-1 && s.at(i)=='p' && is_vowel(s.at(i-1)) && is_vowel(s.at(i+1)) && s.at(i-1)==s.at(i+1)){
            ++i;
            can_skip = false;
        }else{
            result += s.at(i);
            can_skip = true;
        }
    }
    cout << result << endl;
}