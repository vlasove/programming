#include <iostream>
#include <map>
#include <string>

using namespace std;

void ChangerCap(map<string, string> &grossbuch, string country, string new_capital)
{
    if (grossbuch.count(country) == 0)
    {
        grossbuch[country] = new_capital;
        cout << "Introduce new country " << country << " with capital " << new_capital << endl;
    }
    else if (grossbuch[country] == new_capital)
    {
        cout << "Country " << country << " hasn't changed its capital" << endl;
    }
    else
    {

        cout << "Country " << country << " has changed its capital from " << grossbuch[country] << " to " << new_capital << endl;
        grossbuch[country] = new_capital;
    }
}

void Renamer(map<string, string> &grossbuch, string oldName, string newName)
{
    if (oldName == newName)
    {
        cout << "Incorrect rename, skip" << endl;
    }
    else if (grossbuch.count(oldName) == 0)
    {
        cout << "Incorrect rename, skip" << endl;
        grossbuch.erase(oldName);
    }
    else if (grossbuch.count(newName) == 1)
    {
        cout << "Incorrect rename, skip" << endl;
    }
    else
    {
        cout << "Country " << oldName << " with capital " << grossbuch[oldName] << " has been renamed to " << newName << endl;
        grossbuch[newName] = grossbuch[oldName];
        grossbuch.erase(oldName);
    }
}

void About(map<string, string> &grossbuch, string country)
{
    if (grossbuch.count(country) == 0)
    {
        cout << "Country " << country << " doesn't exist" << endl;
        grossbuch.erase(country);
    }
    else
    {
        cout << "Country " << country << " has capital " << grossbuch[country] << endl;
    }
}

void Dump(const map<string, string> &grossbuch)
{
    if (grossbuch.size() == 0)
    {
        cout << "There are no countries in the world" << endl;
    }
    else
    {
        for (auto p : grossbuch)
        {
            cout << p.first << "/" << p.second << " ";
        }
        cout << endl;
    }
}

int main()
{
    map<string, string> grossbuch;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string command;
        cin >> command;
        if (command == "CHANGE_CAPITAL")
        {
            string country, new_capital;
            cin >> country >> new_capital;
            ChangerCap(grossbuch, country, new_capital);
        }
        else if (command == "RENAME")
        {
            string oldName, newName;
            cin >> oldName >> newName;
            Renamer(grossbuch, oldName, newName);
        }
        else if (command == "ABOUT")
        {
            string country;
            cin >> country;
            About(grossbuch, country);
        }
        else
        {
            Dump(grossbuch);
        }
    }
    return 0;
}