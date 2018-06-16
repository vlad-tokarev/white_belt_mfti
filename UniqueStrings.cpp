#include <set>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int N;
    cin >> N;

    set<string> UniqueStrings;

    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        UniqueStrings.insert(s);
    }

    cout << UniqueStrings.size();

}

