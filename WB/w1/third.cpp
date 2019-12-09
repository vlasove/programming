#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "asdsfdcxzdere";
    for (char c : s)
    {
        cout << c << " ";
    }
    cout << endl;


    vector<int> nums = {1,2,3,4,5,5,4,3,2,5,4,3};
    int quant = 0;

    for (auto c : nums){
        if (c == 5) {
            quant++;
        }
    }
    cout<<"Five is "<<quant<<endl;
    cout <<"Another variant!"<<endl;
    int qeq = count(begin(nums), end(nums), 5);
    cout<<"Five from count "<<qeq<<endl;

    string namer = "babax";
    sort(begin(namer), end(namer));
    cout << namer << " "<<count(begin(namer), end(namer), 'a') <<endl;

    return 0;
}