#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> query = {};
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string command;
        cin >> command;
        if (command == "COME")
        {
            int k;
            cin >> k;
            if (k > 0)
            {
                for (int j = 0; j < k; j++)
                {
                    query.push_back(0);
                }
            }
            else
            {
                for (int j = 0; j < k * (-1); j++)
                {
                    query.pop_back();
                }
            }
        }
        else if (command == "WORRY")
        {
            int q;
            cin >> q;
            query[q] = 1;
        }
        else if (command == "QUIET")
        {
            int q;
            cin >> q;
            query[q] = 0;
        }
        else
        {
            int sum = 0;
            for (auto s : query)
            {
                sum += s;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
