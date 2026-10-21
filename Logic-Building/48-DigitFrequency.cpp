#include <iostream>
using namespace std;
int main() {
    int n;
    int digit;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the digit: ";
    cin>>digit;

    int count = 0;

    while (n > 0) {
        int last = n % 10;

        if (last == digit) {
            count++;
        }

        n = n / 10;
    }

    cout << "Frequency: " << count;

    return 0;
}
