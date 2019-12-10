#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "Hello";
    string t = s;
    t += ", world!";
    s = "Holiday";

    vector<string> w = {"a", "b", "c"};
    vector<string> v;
    v = w;
    v[0] = "d";

    cout << w[0] << w[1] << w[2] << endl;
    cout << v[0] << v[1] << v[2] << endl;

    cout << "s = " << s << endl;
    cout << "t = " << t << endl;
    return 0;
}