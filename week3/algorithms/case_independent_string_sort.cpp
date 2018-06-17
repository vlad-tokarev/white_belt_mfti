#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <locale>

using namespace std;

int main(){

    ulong N;

    cin >> N;
    vector<string> S(N);

    for(auto& s: S){
        cin >> s;
    }

    sort(S.begin(), S.end(), [](string s1, string s2){
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        return s1 < s2;
    });

    for(const auto& s: S){
        cout << s << " ";
    }




}