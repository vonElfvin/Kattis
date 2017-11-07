#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n{}, result{}, right_count{};
    char c{};
    string s{};
    unordered_map<char, int> problem_count;
    while(true){
        cin >> n;
        if(n==-1){
            cout << right_count << ' ' << result << endl;
            return 0;
        }
        cin >> c >> s;
        if(s=="right"){
            result += n+problem_count[c]*20;
            ++right_count;
        }else{
            problem_count[c] = problem_count[c]+1;
        }
    }
}