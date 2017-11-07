#include <iostream>

using namespace std;

void print(int board[4][4]){
    for(int i{}; i<4; ++i){
        for(int j{}; j<4; ++j){
            cout << board[j][i] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int board[4][4], direction{}, temp{};
    for(int i{}; i<4; ++i){
        for(int j{}; j<4; ++j){
            cin >> temp;
            board[j][i] = temp;
        }
    }
    cin >> direction;
    switch(direction){
        case(0):
            for(int i{}; i<4; ++i){
                bool can_swap{true};
                for(int j{1}; j<4; ++j){
                    if(board[j][i]!=0){
                        if(board[j-1][i]==0){
                            board[j-1][i]=board[j][i];
                            board[j][i]=0;
                            j=max(0, j-2);
                        }else if(can_swap && board[j-1][i]==board[j][i]){
                            board[j-1][i]*=2;
                            board[j][i]=0;
                            can_swap = false;
                        }else{
                            can_swap = true;
                        }
                    }
                }
            }
            break;
        case(1):
            for(int j{}; j<4; ++j){
                bool can_swap{true};
                for(int i{1}; i<4; ++i){
                    if(board[j][i]!=0){
                        if(board[j][i-1]==0){
                            board[j][i-1]=board[j][i];
                            board[j][i]=0;
                            i=max(0, i-2);
                        }else if(can_swap && board[j][i-1]==board[j][i]){
                            board[j][i-1]*=2;
                            board[j][i]=0;
                            can_swap = false;
                        }else{
                            can_swap = true;
                        }
                    }
                }
            }
            break;
        case(2):
            for(int i{}; i<4; ++i){
                bool can_swap{true};
                for(int j{2}; j>=0; --j){
                    if(board[j][i]!=0){
                        if(board[j+1][i]==0){
                            board[j+1][i]=board[j][i];
                            board[j][i]=0;
                            j=min(3, j+2);
                        }else if(can_swap && board[j+1][i]==board[j][i]){
                            board[j+1][i]*=2;
                            board[j][i]=0;
                            can_swap = false;
                        }else{
                            can_swap = true;
                        }
                    }
                }
            }
            break;
        case(3):
            for(int j{}; j<4; ++j){
                bool can_swap{true};
                for(int i{2}; i>=0; --i){
                    if(board[j][i]!=0){
                        if(board[j][i+1]==0){
                            board[j][i+1]=board[j][i];
                            board[j][i]=0;
                            i=min(3, i+2);
                        }else if(can_swap && board[j][i+1]==board[j][i]){
                            board[j][i+1]*=2;
                            board[j][i]=0;
                            can_swap = false;
                        }else{
                            can_swap = true;
                        }
                    }
                }
            }
            break;
    }
    print(board);
}