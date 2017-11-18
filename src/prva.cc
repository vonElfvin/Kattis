#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> result{};
    int cols{}, rows{};
    char temp{};
    cin >> rows >> cols;
    char cw[cols][rows];

    // Fill the matrix
    for(int y{}; y<rows; ++y){
        for(int x{}; x<cols; ++x){
            cin >> temp;
            cw[x][y] = temp;
        }
    }

    // Check each row
    for(int y{}; y<rows; ++y){
        string temp{};
        for(int x{}; x<cols; ++x){
            if(cw[x][y]!='#') temp += cw[x][y];
            else{
                if(temp.size()>1) result.insert(temp);
                temp = "";
            } 
        }
        if(temp.size()>1) result.insert(temp);
    }

    // Check each column
    for(int x{}; x<cols; ++x){
        string temp{};
        for(int y{}; y<rows; ++y){
            if(cw[x][y]!='#') temp += cw[x][y];
            else{
                if(temp.size()>1) result.insert(temp);
                temp = "";
            } 
        }
        if(temp.size()>1) result.insert(temp);
    }
    
    // Print first one in the set
    cout << endl << *result.begin() << endl;
}