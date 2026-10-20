#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int largest = -1;
    int secondLargest = -1;
    
    while(n > 0){
        int digit = n % 10;

        if(digit > largest){
            secondLargest = largest;
            largest = digit;
        }else if(digit > secondLargest && digit != largest){
            secondLargest = digit;
        }
        n = n / 10;
    }
    cout<<"Second Largest digit: "<<secondLargest<<endl;
    return 0;
}
