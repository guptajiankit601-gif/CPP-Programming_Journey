#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;
    int position = 1;

    while(n > 0){
        int lastDigit = n % 10;

        if(position % 2 != 0){
            sum += lastDigit;
        }
        n /= 10;
        position++;
    }
    cout<<"Alternate digit sum is: "<<sum<<endl;
    
    return 0;
}
