#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;

    while(n >= 10){
        int lastDigit = n % 10;
        int previous = (n / 10) % 10;

        if(lastDigit == previous){
            count++;
        }
        n /= 10;
    }
    cout << "Count is: " << count << endl;
    
    return 0;
}
