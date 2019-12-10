// #include <iostream>

// using namespace std;

int Factorial(int n) {
    if (n < 2) {
        return 1;
    }
    return Factorial( n - 1) * n;
}

// int main() {

//     return 0;
// }