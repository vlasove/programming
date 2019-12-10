#include <iostream>
#include <string>

using namespace std;

int main()
{
    int position = -2;
    string message;
    cin >> message;
    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] == 'f')
        {
            position++;
        }

        if (position >= 0)
        {
            position = i;
            break;
        }
    }
    cout << position << endl;
    return 0;
}