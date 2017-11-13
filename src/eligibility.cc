#include <iostream>

using namespace std;

int main(){
    int n{}, courses{};
    string name{}, began{}, birth{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> name >> began >> birth >> courses;
        cout << name << ' ';
        if(stoi(began.substr(0,4))>=2010 || stoi(birth.substr(0,4))>=1991){
            cout << "eligible";
        }else{
            if(courses>=41){
                cout << "ineligible";
            }else{
                cout << "coach petitions";
            }
        }
        cout << endl;
    }
}