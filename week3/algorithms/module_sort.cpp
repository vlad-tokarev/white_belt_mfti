#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){

    ulong N;

    cin >> N;

    vector<int> numbers(N);
    for(auto& n : numbers){
        cin >> n;
    }

    sort(numbers.begin(), numbers.end(), [](int f, int s){
        return abs(f) < abs(s);
    });

    for(const auto& n : numbers){
        cout << n << " ";
    }

}
