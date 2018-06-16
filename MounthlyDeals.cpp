#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int count;

    cin >> count;

    string op;
    vector<vector<string>> tasks(31);

    vector<ulong> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> dumps;
    int current_m = 0;

    for (int i = 0; i < count; ++i) {
        cin >> op;

        if (op == "ADD"){
            int j; string task;
            cin >> j;
            j--;
            cin >> task;
            tasks[j].push_back(task);
        }
        else if(op == "NEXT"){
            if(current_m == 11){
                current_m = 0;
            }
            else{
                current_m += 1;
            }
            vector<vector<string>> new_tasks = tasks;
            new_tasks.resize(days_in_month[current_m]);

            long move_tasks = tasks.size() - new_tasks.size();
            if(move_tasks > 0){
                vector<string>& last_day = new_tasks[new_tasks.size() -1];
                for (int j = 0; j < move_tasks; ++j){
                    vector<string> day_tasks = tasks[tasks.size() - j - 1];
                    last_day.insert(end(last_day), begin(day_tasks), end(day_tasks));
                }
            }
            tasks = new_tasks;
        }
        else if(op == "DUMP"){

            int j;
            cin >> j;
            j--;
            vector<string> dump;
            for(auto &task:tasks[j]){
                dump.push_back(task);
            }
            dumps.push_back(dump);
        }

    }

    for(auto& dump:dumps){
        cout << dump.size() << " ";
        for (auto& task:dump){
            cout << task << " ";
        }
        cout << endl;
    }

}