#include <iostream>
using namespace std;

int main() {
    int n;
    int digit;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the digit: ";
    cin>>digit;

    int result = 0;
    int place = 1;

    while (n > 0) {
        int last = n % 10;

        if (last != digit) {
            result = last * place + result;
            place = place * 10;
        }
        n = n / 10;
    }
    cout << result;

    return 0;
}
