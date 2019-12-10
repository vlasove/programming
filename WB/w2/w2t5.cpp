// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
    for(auto c : source){
        destination.push_back(c);
    }
    source.clear();
}

// int main() {
//     return 0;
// }