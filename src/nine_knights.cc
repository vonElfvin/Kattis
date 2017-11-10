#include <iostream>

using namespace std;

int main(){
    char board[5][5], temp{};
    for(int y{}; y<5; ++y){
        for(int x{}; x<5; ++x){
            cin >> temp;
            board[x][y] = temp;
        }
    }
    bool invalid{false};  
    int knights{};

    for(int y{}; y<5; ++y){
        for(int x{}; x<5; ++x){
            if(board[x][y]=='k'){
                ++knights;
                // left
                if(x-2>=0 && y-1>=0 && board[x-2][y-1] == 'k') invalid = true;
                if(x-2>=0 && y+1<5&& board[x-2][y+1] == 'k') invalid = true;
                // right
                if(x+2<5 && y-1>=0 && board[x+2][y-1] == 'k') invalid = true;
                if(x+2<5 && y+1<5 && board[x+2][y+1] == 'k') invalid = true;
                // top
                if(x+1<5 && y-2>=0 && board[x+1][y-2] == 'k') invalid = true;
                if(x-1>=0 && y-2>=0 && board[x-1][y-2] == 'k') invalid = true;
                // down
                if(x+1<5 && y+2<5 && board[x+1][y+2] == 'k') invalid = true;
                if(x-1>=0 && y+2<5 && board[x-1][y+2] == 'k') invalid = true;
                if(invalid){
                    cout << "invalid" << endl;
                    return 0;
                }
            }
        }
    }
    if(knights==9){
        cout << "valid" << endl;
    }else{
        cout << "invalid" << endl;
    }
}