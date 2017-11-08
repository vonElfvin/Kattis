#include <iostream>

using namespace std;

int main(){
    char board[7][7] = {"      "}, temp{};
    string s{};
    int result{};

    // get input
    for(int y{}; y<7; ++y){
        if(y<2||y>4){
            for(int x{2}; x<5; ++x){
                cin >> temp;
                board[x][y] = temp;
            }
        }else{
            for(int x{}; x<7; ++x){
                cin >> temp;
                board[x][y] = temp;
            }
        }
    }
    // calculate score
    for(int y{}; y<7; ++y){
        for(int x{}; x<7; ++x){
            if(board[x][y]=='o'){
                if(x-2>=0 && board[x-1][y]=='o' && board[x-2][y]=='.') ++result;
                if(x+2<7 && board[x+1][y]=='o' && board[x+2][y]=='.') ++result;
                if(y-2>=0 && board[x][y-1]=='o' && board[x][y-2]=='.') ++result;
                if(y+2<7 && board[x][y+1]=='o' && board[x][y+2]=='.') ++result;
            }
        }
    }


    // print output
    cout << result << endl;
}