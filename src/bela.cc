#include <iostream>

using namespace std;

char dominant_suit{};

int get_score(char const number, char const suit){
    int score{};
    switch(number){
        case('A'):
            score = 11;
            break;
        case('K'):
            score = 4;
            break;
        case('Q'):
            score = 3;
            break;
        case('J'):
            if(suit == dominant_suit){
                score = 20;
            }else{
                score = 2;
            }
            break;
        case('T'):
            score = 10;
            break;
        case('9'):
            if(suit == dominant_suit) score=14;
            break;
        case('8'):
        case('7'):
        default:
            break;
    }
    return score;
}

int main(){
    int n{}, points{};
    char number{}, suit{};
    cin >> n >> dominant_suit;
    for(int i{}; i<4*n; ++i){
        cin >> number >> suit;
        points += get_score(number, suit);
    }
    cout << points << endl;
}