#include <iostream>

using namespace std;

int main(){
    char board[8][8], temp{};
    for(int y{}; y<8; ++y){
        for(int x{}; x<8; ++x){
            cin >> temp;
            board[x][y] = temp;
        }
    }
    bool invalid{false};

    int queens{};

    for(int y{}; y<8; ++y){
        for(int x{}; x<8; ++x){
            if(board[x][y]=='*'){
                ++queens;
                for(int i{1}; i<8; ++i){
                    // horizontal
                    if(x-i>=0 && board[x-i][y] == '*') invalid = true;
                    if(x+i<8 && board[x+i][y] == '*') invalid = true;
                    // vertical
                    if(y-i>=0 && board[x][y-i] == '*') invalid = true;
                    if(y+i<8 && board[x][y+i] == '*') invalid = true;
                    // diagonal
                    if(x+i<8 && y+i<8 && board[x+i][y+i] == '*') invalid = true;
                    if(x-i>=0 && y-i>=0 && board[x-i][y-i] == '*') invalid = true;
                    if(x+i<8 && y-i>=0 && board[x+i][y-i] == '*') invalid = true;
                    if(x-i>=0 && y+i<8 && board[x-i][y+i] == '*') invalid = true;
                    if(invalid){
                        cout << "invalid" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    if(queens==8){
        cout << "valid" << endl;
    }else{
        cout << "invalid" << endl;
    }
}