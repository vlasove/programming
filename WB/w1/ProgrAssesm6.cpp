#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> binar = {};
    while (num >= 2)
    {
        binar.push_back(num % 2);
        num = num / 2;
    }
    binar.push_back(num);
    for (int i = binar.size() - 1; i >= 0; i--)
    {
        cout << binar[i];
    }
    cout << endl;
    return 0;
}