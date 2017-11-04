#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string n, m;
    cin >> n >> m;
    reverse(n.begin(), n.end());
    reverse(m.begin(), m.end());

    cout << max(stoi(n), stoi(m));
}