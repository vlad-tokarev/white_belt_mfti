#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){

    int Q;

    cin >> Q;

    map<string, vector<string>> buses_for_stop;
    map<string, vector<string>> stops_for_bus;

    for (int i = 0; i < Q; ++i) {

        string command;

        cin >> command;

        if(command == "NEW_BUS"){

            string bus; int stop_count;
            cin >> bus >> stop_count;

            for (int j = 0; j < stop_count; ++j) {
                string stop;
                cin >> stop;
                stops_for_bus[bus].push_back(stop);
                buses_for_stop[stop].push_back(bus);
            }

        }
        else if(command == "BUSES_FOR_STOP"){
            string stop;
            cin >> stop;
            if(buses_for_stop.count(stop) == 0){
                cout << "No stop" << endl;
            }
            else{
                for(auto& bus : buses_for_stop[stop]){
                    cout << bus << " ";
                }
                cout << endl;
            }
        }
        else if(command == "STOPS_FOR_BUS"){
            string bus;
            cin >> bus;

            if(stops_for_bus.count(bus) == 0){
                cout << "No bus" << endl;
                continue;
            }

            for(const auto& stop : stops_for_bus[bus]){

                cout << "Stop " << stop << ": ";

                if(buses_for_stop[stop].size() == 1){
                    cout << "no interchange" << endl;
                    continue;
                }

                for(const auto& ya_bus : buses_for_stop[stop]){
                    if(ya_bus != bus){
                        cout << ya_bus << " ";
                    }
                }
                cout << endl;
            }
        }

        else if(command == "ALL_BUSES"){

            if (stops_for_bus.empty()){
                cout << "No buses" << endl;
                continue;
            }

            for (const auto& item : stops_for_bus){
                string bus = item.first;
                const vector<string>& stops = item.second;

                cout << "Bus " << bus << ": ";

                for (const auto& stop : stops){
                    cout << stop << " ";
                }

                cout << endl;
            }
        }

    }

}