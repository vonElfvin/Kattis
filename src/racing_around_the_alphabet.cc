#include <iostream>
#include <unordered_map>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    unordered_map<char, int> alphabet{
        {'A', 1},
        {'B', 2},
        {'C', 3},
        {'D', 4},
        {'E', 5},
        {'F', 6},
        {'G', 7},
        {'H', 8},
        {'I', 9},
        {'J', 10},
        {'K', 11},
        {'L', 12},
        {'M', 13},
        {'N', 14},
        {'O', 15},
        {'P', 16},
        {'Q', 17},
        {'R', 18},
        {'S', 19},
        {'T', 20},
        {'U', 21},
        {'V', 22},
        {'W', 23},
        {'X', 24},
        {'Y', 25},
        {'Z', 26},
        {' ', 27},
        {'\'', 28}
    };
    string s{};
    int n{}, l{}, _min{}, _max{};
    double const PI = 3.14159265359;
    double o{60*PI}, b = o/28, t = b/15;
    cin >> n;
    cin.ignore();
    for(int i{}; i<n; ++i){
        getline(cin, s);
        double time{s.size()};
        int prev = 0;
        for(int j{1}; j<s.size(); ++j){
            _min = min(alphabet[s.at(prev)],alphabet[s.at(j)]);
            _max = max(alphabet[s.at(prev)],alphabet[s.at(j)]);
            l = _max-_min;
            if(l>14) l=abs(l-28);
            time += t*l;
            prev = j;
        }
        cout << fixed << setprecision(20) << time << endl;
    }
}