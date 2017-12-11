#include <iostream>

using namespace std;

int main(){
    int n{}, p{}, q{};
    cin >> n >> p >>q;
    if(((p+q)/n)%2==1){
        cout << "opponent";
    }else{
        cout << "paul";
    }
}