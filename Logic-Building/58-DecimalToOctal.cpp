#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int octal = 0;
    int place = 1;

    while (n > 0) {
        int remainder = n % 8;
        octal = octal + remainder * place;

        place = place * 10;
        n = n / 8;
    }

    cout<<"Octal: "<<octal;

    return 0;
}
