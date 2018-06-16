#include <map>
#include <set>
#include <iostream>
#include <string>

using namespace std;

int main(){

    map<string, set<string>> synonyms;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        string command;
        cin >> command;

        if(command == "ADD"){
            string word1, word2;
            cin >> word1 >> word2;
            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        }
        else if(command == "COUNT"){
            string word;
            cin >> word;

            cout << synonyms[word].size() << endl;
        }
        else if(command == "CHECK"){
            string word1, word2;
            cin >> word1 >> word2;

            if(synonyms[word1].count(word2) == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }

}