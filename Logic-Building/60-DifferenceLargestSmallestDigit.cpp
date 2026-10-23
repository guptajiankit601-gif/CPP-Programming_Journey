#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int largest = 0;
    int smallest = 9;

    while(n > 0){
        int digit = n % 10;

        if(digit > largest){
            largest = digit;
        }

        if(digit < smallest){
            smallest = digit;
        }
        n = n / 10;
    }
    cout<<"Difference is: "<<largest - smallest<<endl;

    return 0;
}
