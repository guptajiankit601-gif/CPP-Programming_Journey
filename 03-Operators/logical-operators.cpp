#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool student = true;

    cout << (age >= 18 && student) << endl;
    cout << (age >= 18 || student) << endl;
    cout << (!student) << endl;

    return 0;
}
