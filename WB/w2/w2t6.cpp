// #include <iostream>
// #include <vector>

vector<int> Reversed(const vector<int>& v){
    vector<int> temp;
    for(int i = v.size() -1; i >= 0; i--){
        temp.push_back(v[i]);
    }
    return temp;
}