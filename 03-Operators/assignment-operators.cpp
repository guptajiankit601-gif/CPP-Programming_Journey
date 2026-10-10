#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;
    cout << "After += : " << a << endl;

    a -= 3;
    cout << "After -= : " << a << endl;

    a *= 2;
    cout << "After *= : " << a << endl;

    a /= 4;
    cout << "After /= : " << a << endl;

    a %= 3;
    cout << "After %= : " << a << endl;

    return 0;
}
