#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int x = -10;
    double pi = 3.14;
    bool q = true;
    char symbol = 'Z';
    string name = "Hello";
    vector<int> nums = {1, 3, 5, 7};
    map<string, int> words = {{"one", 1}, {"two", 2}};

    cout << x << pi << q << name << endl;
    cout << "Size of " << nums.size() << endl;
    cout << words["one"] << endl;

    int zz = 10;
    int y = 20;
    if (zz == y)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    return 0;
}