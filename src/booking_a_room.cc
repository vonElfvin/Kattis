#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int r{}, n{};
    cin >> r >> n;
    if(r==n){
        cout << "too late" << endl;
        return 0;
    }

    int temp{};
    unordered_set<int> booked_rooms{};
    for(int i{}; i<n; ++i){
        cin >> temp;
        booked_rooms.insert(temp);
    }

    for(int i{1}; i<=100; ++i){
        if(booked_rooms.find(i) == booked_rooms.end()){
            cout << i << endl;
            break;
        }
    }
}