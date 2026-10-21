#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int original = n;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    int difference;

    if(original > reverse){
        difference = original - reverse;
    }else {
        difference = reverse - original;
    }

    cout << "Reverse: " << reverse << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
