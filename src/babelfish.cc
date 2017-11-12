#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, string> dictionary{};
    string s{}, key{}, value{}, word{};
    while(cin.peek()!='\n' && getline(cin, s)) dictionary[s.substr(s.find(' ')+1, s.size())] = s.substr(0, s.find(' '));
    cin.ignore();
    while(cin.peek()!='\n' && getline(cin, word)){
        if(dictionary.find(word)!=dictionary.end()){
            cout << dictionary[word] << endl;
        }else{
            cout << "eh" << endl;
        }
    } 
}