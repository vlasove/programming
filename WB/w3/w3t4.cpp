#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class SortedStrings {
public:
  void AddString(const string& s) {
    box.push_back(s);
    sort(begin(box), end(box));
  }
  vector<string> GetSortedStrings() {
    return box;
  }
private:
  vector<string> box;
};


// void PrintSortedStrings(SortedStrings& strings) {
//   for (const string& s : strings.GetSortedStrings()) {
//     cout << s << " ";
//   }
//   cout << endl;
// }

// int main() {
//     SortedStrings strings;
  
//     strings.AddString("first");
//     strings.AddString("third");
//     strings.AddString("second");
//     PrintSortedStrings(strings);
    
//     strings.AddString("second");
//     PrintSortedStrings(strings);
//     return 0;
// }