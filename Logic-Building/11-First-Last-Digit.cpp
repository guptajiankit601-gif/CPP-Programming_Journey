#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int lastDigit = num % 10;

    while(num >= 10){
        num = num /10; 
    }
    int firstDigit = num;
    cout << "First Digit: "<< firstDigit << endl;
    cout << "Last Digit: "<< lastDigit << endl;
}
