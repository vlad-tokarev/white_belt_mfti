#include <iostream>
#include <vector>

using namespace std;

int main(){


    int count;

    cin >> count;

    string op; int arg;

    vector<bool> queue;
    vector<long> count_worry_in_q;

    for (int i = 0; i < count; ++i) {
        cin >> op;

        if(op == "WORRY_COUNT"){
            int s = 0;
            for (auto worry  : queue) {
                if(worry == true){
                    s += 1;
                }
            }
            count_worry_in_q.push_back(s);
        }
        else if(op == "COME"){
            cin >> arg;
            queue.resize(queue.size()+arg, arg<0);

        }
        else if(op == "WORRY"){
            cin >> arg;
            queue[arg] = true;
        }
        else if(op == "QUIET"){
            cin >> arg;
            queue[arg] = false;
        }
    }

    for (auto c: count_worry_in_q) {
        cout << c << endl;
    }

}