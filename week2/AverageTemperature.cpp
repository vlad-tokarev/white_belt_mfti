#include <iostream>
#include <vector>

using namespace std;


int main(){

    int n; vector<int> temperature; int sum = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        sum += t;
        temperature.push_back(t);
    }

    int avg = sum / n;

    vector<int> higher_temperature;

    for (int j = 0; j < n; ++j) {
        if(temperature[j] > avg){
            higher_temperature.push_back(j);
        }
    }

    cout << higher_temperature.size() << endl;

    for (auto ind : higher_temperature) {
        cout << ind << " ";
    }

}