#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<char, string> new_alphabet{
        {'A', "@"},
        {'B', "8"},
        {'C', "("},
        {'D', "|)"},
        {'E', "3"},
        {'F', "#"},
        {'G', "6"},
        {'H', "[-]"},
        {'I', "|"},
        {'J', "_|"},
        {'K', "|<"},
        {'L', "1"},
        {'M', "[]\\/[]"},
        {'N', "[]\\[]"},
        {'O', "0"},
        {'P', "|D"},
        {'Q', "(,)"},
        {'R', "|Z"},
        {'S', "$"},
        {'T', "']['"},
        {'U', "|_|"},
        {'V', "\\/"},
        {'W', "\\/\\/"},
        {'X', "}{"},
        {'Y', "`/"},
        {'Z', "2"}
    };
    string s{};
    getline(cin, s);
    for(char const c : s){
        if(new_alphabet.find(toupper(c)) != new_alphabet.end()){
            cout << new_alphabet.at(toupper(c));
        }else{
            cout << c;
        }
    }
}