#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    if (n >= 1){
        while (n > 0 ){
            sum += n;
            n--;
        }
        cout <<sum<<endl;
    }else {
        cout<<"Enter positive value"<<endl;
    }
    return 0;
}