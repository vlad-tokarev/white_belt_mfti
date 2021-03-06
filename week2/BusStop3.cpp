#include <set>
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main(){

    int Q;

    cin >> Q;

    map<set<string>, int> routes;
    int current_route = 0;

    for (int i = 0; i < Q; ++i) {
        int N;
        cin >> N;
        set<string> route;
        for (int j = 0; j < N; ++j) {
            string stop;
            cin >>stop;
            route.insert(stop);
        }
        if(routes.count(route) == 0){
            routes[route] =  ++current_route;
            cout << "New bus " << current_route << endl;
        }
        else{
            int num = routes[route];
            cout << "Already exists for " << num << endl;
        }
    }

}