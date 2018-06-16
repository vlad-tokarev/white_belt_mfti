#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<string> result;

    for (int i = 0; i < n; ++i) {

        string first; string second;
        cin >> first >> second;

        map<char, int> counter_first; map<char, int> counter_second;

        for(auto c : first){
            counter_first[c]++;
        }
        for(auto c : second){
            counter_second[c]++;
        }

        if(counter_first == counter_second){
            result.push_back("YES");
        }
        else{
            result.push_back("NO");
        }

    }

    for(const auto& r: result){
        cout << r << endl;
    }

}