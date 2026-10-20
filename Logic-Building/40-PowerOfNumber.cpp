#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter the base: ";
    cin>>base;
    int exponent;
    cout<<"Enter the exponenet: ";
    cin>>exponent;

    int result = 1;

    for(int i = 1; i <= exponent; i++){
        result *= base;
    }

    cout << "Result is: " << result << endl;

    return 0;
}
