#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v){
    vector<int> result;
    for(long i=v.size() - 1; i >= 0; i--){
        result.push_back(v[i]);
    }

    return result;
}

//int main(){
//
//    vector<int> numbers = {1, 5, 3, 4, 2};
//    vector<int> result = Reverse(numbers);
//    for(auto n:result){
//        cout << n << ',';
//    }
//// numbers должен оказаться равен {2, 4, 3, 5, 1}
//    return 0;
//}