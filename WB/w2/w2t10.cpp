#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> BuildCharCounters(string message){
    map<char, int> m;
    for (auto c : message){
        m[c]++;
    }
    return m;
}

int main() {
    string message1, message2;
    int num;
    cin >> num;
    for(int i =0; i < num; i++){
        cin >> message1 >> message2;
        if(BuildCharCounters(message1) == BuildCharCounters(message2)){
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}