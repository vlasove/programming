#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string FindByYear(int year, map<int, string> &m)
{
    string answer = "";
    if (m.empty())
    {
        return answer;
    }
    else
    {
        for (auto p : m)
        {
            if (p.first <= year)
            {
                answer = p.second;
            }
        }
    }
    return answer;
}

class Person
{
public:
    void ChangeFirstName(int year, const string &first_name)
    {
        names[year] = first_name;
    }
    void ChangeLastName(int year, const string &last_name)
    {
        last_names[year] = last_name;
    }
    string GetFullName(int year)
    {
        if (names.empty() && last_names.empty())
        {
            cout << "Incognito" << endl;
        }
        else if (FindByYear(year, names) == "" && FindByYear(year, last_names) != "")
        {
            cout << FindByYear(year, last_names) << " with unknown first name" << endl;
        }
        else if (FindByYear(year, names) != "" && FindByYear(year, last_names) == "")
        {
            cout << FindByYear(year, names) << " with unknown last name" << endl;
        }
        else
        {
            cout << FindByYear(year, names) << " " << FindByYear(year, last_names) << endl;
        }
    }

private:
    map<int, string> names;
    map<int, string> last_names;
};

int main()
{
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990})
    {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970})
    {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970})
    {
        cout << person.GetFullName(year) << endl;
    }

    return 0;
}