#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int num;
    cin >> num;
    vector<int> nums;
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    sort(begin(nums), end(nums), [](int x, int y){
        if ( abs(x)< abs(y)){
            return true;
        } 
        return false;
    });

    for(const auto& c : nums) {
        cout<<c<< " ";
    }
    cout<<endl;


    return 0;
}