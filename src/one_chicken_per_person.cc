#include <iostream>

using namespace std;

int main(){
    int n{}, m{};
    cin >> n >> m;
    if(n<m){
        cout << "Dr. Chaz will have " << m-n;
        if(m-n == 1){
            cout << " piece ";
        }else{
            cout << " pieces ";
        }
        cout << "of chicken left over!" << endl;
    }else{
        cout << "Dr. Chaz needs " << n-m;
        if(n-m==1){
            cout << " more piece ";
        }else{
            cout << " more pieces ";
        } 
        cout << "of chicken!" << endl;
    }
}