#include <iostream>
#include <cmath>

using namespace std;

int adrian{}, bruno{}, goran{};

void calc_score(const char c, const int i){
    int a = i%3;
    int b = i%4;
    int g = i%6;
    switch(a){
        case(0):
            if(c=='A') ++adrian;
            break;
        case(1):
            if(c=='B') ++adrian;
                break;
        case(2):
            if(c=='C') ++adrian;
                break;
    }

    switch(b){
        case(0):
            if(c=='B') ++bruno;
            break;
        case(1):
            if(c=='A') ++bruno;
                break;
        case(2):
            if(c=='B') ++bruno;
                break;
        case(3):
            if(c=='C') ++bruno;
                break;
    }

    switch(g){
        case(0):
            if(c=='C') ++goran;
            break;
        case(1):
            if(c=='C') ++goran;
                break;
        case(2):
            if(c=='A') ++goran;
                break;
        case(3):
            if(c=='A') ++goran;
                break;
        case(4):
            if(c=='B') ++goran;
                break;
        case(5):
            if(c=='B') ++goran;
                break;
    }
}

int main(){
    int n{};
    string s{};   
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for(int i{}; i<n; ++i){
        calc_score(s.at(i), i);
    }
    int result = max(max(adrian, bruno), goran);
    cout << result << endl;
    if(adrian==result){
        cout << "Adrian" << endl;
    }
    if(bruno==result){
        cout << "Bruno" << endl;
    }
    if(goran==result){
        cout << "Goran" << endl;
    }
}