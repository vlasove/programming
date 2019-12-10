// #include <iostream>
#include <string>

// using namespace std;

bool IsPalindrom(string origin)
{
    string sample;
    for (int i = origin.size() - 1; i >= 0; i--)
    {
        sample += origin[i];
    }
    return (sample == origin);
}

// int main()
// {
//     string test;
//     cin >> test;
//     cout << IsPalindrom(test) << endl;
//     return 0;
// }