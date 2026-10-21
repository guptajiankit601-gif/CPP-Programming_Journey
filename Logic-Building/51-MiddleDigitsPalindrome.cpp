#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    n = n / 10;

    int last = n % 10;
    int reverse = 0;

    while (n >= 10) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    int middle = reverse;
    int original = middle;
    int rev = 0;

    while (middle > 0) {
        int digit = middle % 10;
        rev = rev * 10 + digit;
        middle = middle / 10;
    }

    if (original == rev) {
        cout << "Palindrome"<<endl;
    } else {
        cout << "Not Palindrome"<<endl;
    }

    return 0;
}
