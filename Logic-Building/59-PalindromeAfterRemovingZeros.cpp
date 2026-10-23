#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp = n;
    int newNumber = 0;
    
    while(temp > 0){
        int digit = temp % 10;

        if(digit != 0){
            newNumber = newNumber * 10 + digit;
        }   
        temp /= 10;
    }
    int reversed = 0;
    temp = newNumber;

    while(temp > 0){
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if(newNumber == reversed){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;

}
