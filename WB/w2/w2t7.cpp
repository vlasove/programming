#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> temp;
    int num;
    cin >> num;
    int val;
    int sum = 0;

    for (int i = 0; i < num; i++)
    {

        cin >> val;
        temp.push_back(val);
        sum += val;
    }
    int avg = sum / num;

    int count = 0;
    for (auto i : temp)
    {
        if (i > avg)
        {
            count++;
        }
    }
    cout << count << endl;

    for (int i = 0; i < num; i++)
    {
        if (temp[i] > avg)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}