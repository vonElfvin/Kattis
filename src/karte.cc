#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> p, k, h, t;
int number{};
string s{};
char c{};
bool greska{};

bool search(unordered_set<int> & temp, int & i){
    bool result = temp.find(i) != temp.end();
    temp.insert(i);
    return result;
}

int main(){
    getline(cin, s);
    for(int i{}; i<s.size(); i+=3){
        c = s.at(i);
        number = stoi(s.substr(i+1,i+2));
        switch(c){
            case('P'):
                greska = search(p, number);
                break;
            case('K'):
                greska = search(k, number);
                break;
            case('H'):
                greska = search(h, number);
                break;
            case('T'):
                greska = search(t, number);
                break;
        }
        if(greska){
            cout << "GRESKA" << endl;
            return 0;
        }
    }
    cout << 13-p.size() << ' ' << 13-k.size() << ' ' << 13-h.size() << ' ' << 13-t.size() << endl;
}