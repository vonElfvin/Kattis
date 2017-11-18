#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a{}, b{}, c{}, d{}, p{}, m{}, g{};
    cin >> a >> b >> c >> d >> p >> m >> g;
    vector<int> e;
    e.push_back(p);
    e.push_back(m);
    e.push_back(g);
    for(auto it = e.begin(); it!=e.end(); ++it){
        int _a = *it%(a+b);
        int _c = *it%(c+d);
        if((_a!=0 && _a<=a) && (_c!=0 && _c<=c)){
            cout << "both";
        }else if((_a!=0 && _a<=a) || (_c!=0 && _c<=c)){
            cout << "one";
        }else{
            cout << "none";
        }
        cout << endl;
    }
}