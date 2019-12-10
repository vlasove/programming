#include <iostream>

using namespace std;

int main()
{
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    if (N > B)
    {
        cout << N * (100 - Y) / 100 << endl;
    }
    else if (N > A)
    {
        cout << N * (100 - X) / 100 << endl;
    }
    else
    {
        cout << N << endl;
    }

    return 0;
}