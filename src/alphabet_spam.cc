#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string line{};
    getline(cin, line);
    double w{}, l{}, u{}, s{};
    for(char const c : line){
        if(97<=(int)c && (int)c<=122){
            ++l;
        }else if(65<=(int)c && (int)c<=90){
            ++u;
        }else if((int)c==95){
            ++w;
        }else{
            ++s;
        }
    }
    int size = w+l+u+s;
    cout << fixed << setprecision(20) << w/size << endl << l/size << endl << u/size << endl << s/size << endl;
}