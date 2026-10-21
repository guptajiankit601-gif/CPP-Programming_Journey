#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    bool increasing = true;

    while (n >= 10) {
        int last = n % 10;
        int previous = (n / 10) % 10;

        if (previous >= last) {
            increasing = false;
            break;
        }

        n = n / 10;
    }

    if (increasing) {
        cout << "Increasing Digits";
    } else {
        cout << "Not Increasing Digits";
    }

    return 0;
}
