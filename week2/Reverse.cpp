#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& v){
    for(int i=0; i < v.size()/2; i++){

        auto j = v.size() - 1 - i;

        auto temp = v[i];
        v[i] = v[j];
        v[j] = temp;

    }
}
//
//int main(){
//
//    vector<int> numbers = {1, 5, 3, 4, 2};
//    Reverse(numbers);
//    for(auto n:numbers){
//        cout << n << ',';
//    }
//// numbers должен оказаться равен {2, 4, 3, 5, 1}
//    return 0;
//}