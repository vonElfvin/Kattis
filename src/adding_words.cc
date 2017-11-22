#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
    map<string, int> words;
    map<int, string> values;
    string action;
    while(cin >> action){
        if(action=="def"){
            string x;
            int y;
            cin >> x >> y;
            if(words.find(x) != words.end()){
                int old_value = words[x];
                words.erase(x);
                values.erase(old_value);
            }
            words[x] = y;
            values[y] = x;
        }else if(action=="calc"){
            string line, var;
            char c;
            int sum = 0;
            int mult = 1;
            string ans = "";

            getline(cin, line);
            istringstream iss(line.substr(1));

            while(iss >> var){
                if(words.find(var) == words.end()){
                    ans = "unknown";
                    break;
                } else {
                    sum += mult*words[var];
                }
                iss >> c;
                if(c == '+'){
                    mult = 1;
                } else if(c == '-'){
                    mult = -1;
                } else { //=
                    if(values.find(sum) != values.end()){
                        ans = values[sum];
                    } else {
                        ans = "unknown";
                    }
                    break;
                }
            }
            cout << line.substr(1) << " " << ans << endl;
        }else if(action=="clear"){
            words.clear();
            values.clear();
        }
    }
}