#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int main(){
    string s{};
    vector<int> lengths{};
    while(cin.peek() != '\n' && getline(cin, s)){
        if(s.size()>0) lengths.push_back(s.size());
    }
    int result{}, max{};
    max = *max_element(lengths.begin(), lengths.end());
    for(auto it = lengths.begin(); it != lengths.end()-1; it++){
        result += pow(*it-max, 2);
    }
    cout << result << endl;
}

