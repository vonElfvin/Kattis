#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(){
    string action{}, word{}, s{};
    int value{};
    map<string, int> word_value{};
    map<int, string> value_word{};
    while(1){
        cin >> action;
        cin.ignore();
        if(action=="clear") break;
        if(action=="def"){
            cin >> word >> value;
            if(value!=0){
                word_value[word] = value;
            }else{
                word_value[word] = -1001;
            }
            value_word[value] = word;
        }
        if(action=="calc"){
            getline(cin, s);
            cout << s << ' ';
            stringstream iss{s};
            stringstream eos{};
            vector<string> calc{};
            string op{"+"};
            int result{};
            copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(calc));
            for(int i{}; i<calc.size(); i++){
                if(i%2==0){
                    if(op=="+"){
                        if(word_value[calc.at(i)]!=0){
                            if(word_value[calc.at(i)]!=-1001) result+=word_value[calc.at(i)];
                        }else{
                            cout << "unknown";
                            break;
                        }
                    }else if(op=="-"){
                        if(word_value[calc.at(i)]!=0){
                            if(word_value[calc.at(i)]!=-1001) result-=word_value[calc.at(i)];
                        }else{
                            cout << "unknown";
                            break;
                        }
                    }
                }else{
                    op = calc.at(i);
                    if(op=="="){
                        if(value_word[result].size()>0) cout << value_word[result];
                        else cout << "unknown";
                        break;
                    } 
                }
            }
            cout << endl;
        }
    }
}