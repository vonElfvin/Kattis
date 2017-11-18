#include <iostream>
#include <cmath>
#include <vector>
#include <tuple>
#include <iterator>
#include <algorithm>

using namespace std;

int dist(tuple<int, double, double> tuple1, tuple<int, double, double> tuple2){
    return round(sqrt(pow(get<1>(tuple1)-get<1>(tuple2),2)+pow(get<2>(tuple1)-get<2>(tuple2), 2)));
}

int main(){
    int n{};
    double x{}, y{};
    cin >> n;
    vector<tuple<int, double, double>> crds(n);
    vector<tuple<int, double, double>> tour(n);
    vector<bool> used(n, false);
    used.at(0) = true;
    cin >> x >> y;
    tour.at(0) = make_tuple(0, x, y);
    crds.at(0) = make_tuple(0, x, y);
    for(int i{1}; i<n; ++i){
        cin >> x >> y;
        crds.at(i) = make_tuple(i,x,y);
    }
    int counter{};
    for(auto i = tour.begin(); i != tour.end()-1; ++i){
        int best{-1};
        vector<tuple<int, double, double>>::iterator best_tuple;
        for(auto j = crds.begin(); j != crds.end(); ++j){
            if(!used.at(get<0>(*j)) && (best == -1 || (dist(*i, *j) < dist(*i, *best_tuple)))) best = get<0>(*j);
            best_tuple = find_if(crds.begin(), crds.end(), [best](const tuple<int, double, double> t){return get<0>(t) == best;});
        }
        used.at(best) = true;
        ++counter;
        tour.at(counter) = *best_tuple;
    }
    for(auto it = tour.begin(); it!=tour.end(); ++it){
        cout << get<0>(*it) << endl;
    }
}