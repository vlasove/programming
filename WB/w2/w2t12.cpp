#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void Hardness(map<string, vector<string>> &busForStops, map<string, vector<string>> &stopForBuses, string bus)
{
    if (busForStops.count(bus) == 0)
    {
        cout << "No bus" << endl;
        busForStops.erase(bus);
    }
    else
    {
        auto stops = busForStops[bus];
        for (auto stop : stops)
        {
            cout << "Stop " << stop << ":";
            for (auto b : stopForBuses[stop])
            {
                if (stopForBuses[stop].size() == 1)
                {
                    cout << " no interchange";
                }
                else
                {
                    if (b == bus)
                    {
                        continue;
                    }
                    cout << " " << b;
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    map<string, vector<string>> stopForBuses, busForStops; // останова -- список автобусов, автобус -- список остановок
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string command;
        cin >> command;
        if (command == "NEW_BUS")
        {
            string bus;
            cin >> bus;
            int stopsNum;
            cin >> stopsNum;
            for (int i = 0; i < stopsNum; i++)
            {
                string curStop;
                cin >> curStop;
                stopForBuses[curStop].push_back(bus);
                busForStops[bus].push_back(curStop);
            }
        }
        else if (command == "BUSES_FOR_STOP")
        {
            string stop;
            cin >> stop;
            if (stopForBuses.count(stop) == 0)
            {
                cout << "No stop" << endl;
                stopForBuses.erase(stop);
            }
            else
            {
                for (auto b : stopForBuses[stop])
                {
                    cout << b << " ";
                }
                cout << endl;
            }
        }
        else if (command == "ALL_BUSES")
        {
            if (busForStops.size() == 0)
            {
                cout << "No buses" << endl;
            }
            else
            {
                for (auto s : busForStops)
                {
                    cout << "Bus " << s.first << ":";
                    for (auto ss : s.second)
                    {
                        cout << " " << ss;
                    }
                    cout << endl;
                }
            }
        }
        else
        {
            string bus;
            cin >> bus;
            Hardness(busForStops, stopForBuses, bus);
        }
    }
    return 0;
}