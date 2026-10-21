#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int last = n % 10;

    while (n >= 10) {
        n = n / 10;
    }

    int first = n;

    cout << "Sum: " << first + last;

    return 0;
}
