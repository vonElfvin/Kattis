#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int N{};
    cin >> N;

    int N_G{}, S_G{}, N_M{}, S_M{};
    for(int i{}; i < N; ++i) {

        cin >> N_G >> N_M;

        // read armies
        map<int, int> godzilla_army{}, mecha_army{}; // store armies in maps
        set<int> strengths{}; // store strengths in set (unique & sorted)
        for(int j{}; j < N_G; ++j) {
            cin >> S_G;
            godzilla_army[S_G] += 1;
            strengths.insert(S_G);
        }
        for(int j{}; j < N_M; ++j) {
            cin >> S_M;
            mecha_army[S_M] += 1;
            strengths.insert(S_M);
        }
        
        int N_battles_total{N_G + N_M}, S{};
        for(auto it = strengths.begin(); it != strengths.end();) {

            S = *it;

            if (mecha_army.begin() -> first == S) {
                if (godzilla_army.begin() -> first != S) {
                    ++it;
                }
                mecha_army.erase(mecha_army.begin());
            } else {
                godzilla_army.erase(godzilla_army.begin());
                ++it;
            }

            if (godzilla_army.empty()) {
                cout << "MechaGodzilla" << endl;
                break;
            }

            if (mecha_army.empty()) {
                cout << "Godzilla" << endl;
                break;
            }
        }
    }
}