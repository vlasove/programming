#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintVector(const vector<string>& messages){
    cout<<messages.size()<<" ";
    for(auto c : messages){
        cout<<c<<" ";
    }
    cout<<endl;
}

void MonthsChanger(vector<vector<string>>& calendar, int currentMonth, const vector<int>&  days_in_months){
    vector<vector<string>> new_calendar(days_in_months[currentMonth]);
    for(int i = 0; i < min(calendar.size(), new_calendar.size()); i++){
        new_calendar[i] = calendar[i];
    }

    if (new_calendar.size() < calendar.size()){
        for(int j = new_calendar.size(); j < calendar.size(); j++){
            new_calendar[new_calendar.size() - 1].insert(end(new_calendar[new_calendar.size() - 1]), begin(calendar[j]), end(calendar[j]));
        }
    }
    calendar = new_calendar;
    new_calendar.clear();
}

int main()
{
    vector<int> days_in_months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> calendar(days_in_months[0]);
    int currentMonth = 0;

    int num;
    cin >> num;
    for (int i =0; i < num; i++){
        string command, task;
        int day;

        cin >> command;
        if (command == "ADD"){
            cin>>day>>task;
            calendar[day - 1].push_back(task);
        } else if (command == "DUMP"){
            cin >> day;
            PrintVector(calendar[day - 1]);

        } else {
            
            currentMonth++;
            if (currentMonth > 11) {
                currentMonth = 0;
            }
            MonthsChanger(calendar, currentMonth, days_in_months);
            //do something
        }
        
    }
    return 0;
}