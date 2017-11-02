#include <iostream>
#include <string>

using namespace std;

void swap(int (&a)[3], const int from, const int to){
    int temp = a[to];
    a[to] = a[from];
    a[from] = temp;
}

int main(){
    string moves{};
    int cups[3] = {1, 0, 0};
    getline(cin, moves);
    for(char const move : moves){
        switch(move){
            case 'A':
                swap(cups, 0, 1);
                break;
            case 'B':
                swap(cups, 1, 2);
                break;
            case 'C':
                swap(cups, 0, 2);
                break;
            default:
                break;
        }
    }
    for(int i{}; i<3; ++i){
        if(cups[i]==1){
            cout << i+1;
        }
    }
}