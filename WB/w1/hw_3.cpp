#include <cmath>
#include <iostream>

using namespace std;

void Linear(double B, double C) {
    if (B == 0) {
        cout << " "<<endl;
    } else {
        cout << -C/B<<endl;
    }
}

void Quadratic(double A, double B, double C) {
    double D = B*B - 4*A*C;
    if (D < 0){
        cout << " "<<endl;
    } else if (D == 0) {
        cout << -B/(2*A)<<endl;
    } else {
        cout << (-B + sqrt(D)) / (2*A) <<" "<< (-B - sqrt(D)) / (2*A) <<endl;
    }
}

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    if (A == 0) {
        Linear(B,C);
    } else {
        Quadratic(A,B,C);
    }
    return 0;
}