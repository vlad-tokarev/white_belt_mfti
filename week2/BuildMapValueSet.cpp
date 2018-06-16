#include <map>
#include <set>
#include <string>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {

    set<string> value_set;

    for(const auto& pair: m){
        value_set.insert(pair.second);
    }

    return value_set;
}