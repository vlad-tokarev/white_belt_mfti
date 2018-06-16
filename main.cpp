#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<int, string> m;
    bool r = m[3] != "";
    cout << r;
    return 0;
}