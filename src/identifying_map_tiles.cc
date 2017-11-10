#include <iostream>
#include <cmath>

using namespace std;

void get_coordinate(string quadkey, int c_from, int c_to, int r_from, int r_to){
    char dir = quadkey.at(0);
    if(dir=='0'){
        c_to=floor((double)(c_from+c_to)/2);
        r_to=floor((double)(r_from+r_to)/2);
    }else if(dir=='1'){
        c_from=ceil((double)(c_from+c_to)/2);
        r_to=floor((double)(r_from+r_to)/2);
    }else if(dir=='2'){
        c_to=floor((double)(c_from+c_to)/2);
        r_from=ceil((double)(r_from+r_to)/2);
    }else{
        c_from=ceil((double)(c_from+c_to)/2);
        r_from=ceil((double)(r_from+r_to)/2);
    }
    if(r_from==r_to && c_from==c_to){
        cout << c_from << ' ' << r_from << endl;
    }else{
        quadkey=quadkey.substr(1,quadkey.size());
        get_coordinate(quadkey, c_from, c_to, r_from, r_to);
    }
    
}

int main(){
    string quadkey{};
    int zoom{}, n{};

    cin >> quadkey;
    zoom = quadkey.size();
    n = pow(2, zoom)-1;

    cout << zoom << ' ';
    get_coordinate(quadkey, 0, n, 0, n);
}