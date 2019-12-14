#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int FindByYear(int year, const map<int, string>& m)
{
    int answer = 0;
    vector<int> prompt;
    for (auto p : m)
    {
        prompt.push_back(p.first);
    }

    if (prompt.empty())
    {
        return answer;
    }
    else
    {

        for (auto i : prompt)
        {
            if (i <= year)
            {
                answer = i;
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
        if (FindByYear(year, names) == 0 && FindByYear(year, last_names) == 0)
        {
            return "Incognito";
        }
        else if (FindByYear(year, names) != 0 && FindByYear(year, last_names) == 0)
        {
            return names[FindByYear(year, names)] + " with unknown last name";
        }
        else if (FindByYear(year, names) == 0 && FindByYear(year, last_names) != 0)
        {
            return last_names[FindByYear(year, last_names)] + " with unknown first name";
        }
        else
        {
            return names[FindByYear(year, names)] + " " + last_names[FindByYear(year, last_names)];
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