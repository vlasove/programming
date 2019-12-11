#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    map<vector<string>, int> stopsbuch;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int amount;
        cin >> amount;
        vector<string> stops;
        for (int j = 0; j < amount; j++)
        {
            string stop;
            cin >> stop;
            stops.push_back(stop);
        }
        if (stopsbuch.count(stops) == 0)
        {
            stopsbuch.erase(stops);
            int s = stopsbuch.size();
            stopsbuch[stops] = s + 1;
            cout << "New bus " << s + 1 << endl;
        }
        else
        {
            cout << "Already exists for " << stopsbuch[stops] << endl;
        }
    }

    return 0;
}