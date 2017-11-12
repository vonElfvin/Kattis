#include <iostream>
#include <vector>

using namespace std;

int main(){
    string ciphertext{}, message{}, start_key{};
    cin >> ciphertext;
    cin >> start_key;
    int m{ciphertext.size()};
    int n{start_key.size()};
    char key[m];
    for(int i{}; i<n; ++i){
        key[i] = start_key[i];
    }
    for(int i{}; i<m; ++i){
        if(ciphertext[i]-key[i]+'A' >= 65){
            ciphertext[i] = ciphertext[i]-key[i]+'A';
        }else{
            ciphertext[i] = ciphertext[i]-key[i]+'A'+26;
        }
        if(i+n<m){
            key[i+n] = ciphertext[i];
        }
    }
    cout << ciphertext << endl;
}