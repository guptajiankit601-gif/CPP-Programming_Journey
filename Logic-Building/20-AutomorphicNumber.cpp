#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int original = n;
    int square = n * n;
    int temp = n;
    int divisor = 1;

    while (temp > 0) {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == original) {
        cout << original << " is an Automorphic Number." << endl;
    } else {
        cout << original << " is not an Automorphic Number." << endl;
    }

    return 0;
}
