#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int w{}, l{}, n{}, steps{};
    char dir{};
    while(true){
        cin >> w >> l;
        if(w==0 && l == 0) break;
        cin >> n;
        int thinks_x{}, thinks_y{}, actual_x{}, actual_y{};
        for(int i{}; i<n; ++i){
            cin >> dir >> steps;
            switch(dir){
                case('u'):
                    thinks_y+=steps;
                    actual_y = min(l-1, actual_y+steps);
                    break;
                case('r'):
                    thinks_x+=steps;
                    actual_x = min(w-1, actual_x+steps);
                    break;
                case('d'):
                    thinks_y-=steps;
                    actual_y = max(0, actual_y-steps);
                    break;
                case('l'):
                    thinks_x-=steps;
                    actual_x = max(0, actual_x-steps);
                    break;
            }
        }
        cout << "Robot thinks " << thinks_x << ' ' << thinks_y << endl;
        cout << "Actually at " << actual_x << ' ' << actual_y << endl;
    }
}