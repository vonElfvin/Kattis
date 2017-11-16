#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<char, string> morse{
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'_', "..--"},
    {'.', "---."},
    {',', ".-.-"},
    {'?', "----"}
};

unordered_map<string, char> chars{
    {".-",'A'},
    {"-...",'B'},
    {"-.-.",'C'},
    {"-..",'D'},
    {".",'E'},
    {"..-.",'F'},
    {"--.",'G'},
    {"....",'H'},
    {"..",'I'},
    {".---",'J'},
    {"-.-",'K'},
    {".-..",'L'},
    {"--",'M'},
    {"-.",'N'},
    {"---",'O'},
    {".--.",'P'},
    {"--.-",'Q'},
    {".-.",'R'},
    {"...",'S'},
    {"-",'T'},
    {"..-",'U'},
    {"...-",'V'},
    {".--",'W'},
    {"-..-",'X'},
    {"-.--",'Y'},
    {"--..",'Z'},
    {"..--",'_'},
    {"---.",'.'},
    {".-.-",','},
    {"----",'?'}
};

int main(){
    string encrypted_message{};
    while(cin.peek()!='\n' && getline(cin, encrypted_message)){
        string encrypted_morse{}, decrypted_morse{}, decrypted_message{}, numbers{};
        for(const char c : encrypted_message){
            encrypted_morse += morse.at(c);
            numbers += to_string(morse.at(c).size());
        }
        reverse(numbers.begin(), numbers.end());
        string morse_letter{};
        int i{}, length{};
        for(char const c : numbers){
            length = (int)c-'0';
            morse_letter = encrypted_morse.substr(i, length);
            decrypted_message += chars.at(morse_letter);
            i += length;
        }
        cout << decrypted_message << endl;
    }
}