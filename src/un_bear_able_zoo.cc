#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

char easytolower(char in){
    if(in<='Z' && in>='A'){
        return in-('Z'-'z');
    }
    return in;
}

string get_animal(string name){
    string animal{};
    istringstream({name.rbegin(), name.rend()}) >> animal;
    animal = {animal.rbegin(), animal.rend()};
    transform(animal.begin(), animal.end(), animal.begin(), easytolower);;
    return animal;
}

int main(){
    int n{}, counter{};
    string name{};
    while(1){
        cin >> n;
        cin.ignore();
        if(n==0) break;
        map<string, int> animals{};
        for(int i{}; i<n; ++i){
            getline(cin, name);
            animals[get_animal(name)] += 1;
        }
        ++counter;
        cout << "List " << counter << ':' << endl;
        for(auto it = animals.begin(); it!=animals.end(); ++it){
            cout << it->first << " | " << it->second << endl;
        }
    }
}
