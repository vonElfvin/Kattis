#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> points(5);
    int grade{};
    for(int i{}; i<5; ++i){
        for(int j{}; j<4; ++j){
            cin >> grade;
            points.at(i) = points.at(i) + grade;
        }
    }
    vector<int>::iterator winner = max_element(points.begin(), points.end());
    int winner_index = distance(points.begin(), winner);
    cout << winner_index+1 << ' ';
    cout << points.at(winner_index) << endl;
}