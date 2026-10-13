#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int original = num;
    int reverse = 0;
    while(num > 0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(original == reverse){
        cout<<"Palindrome Number."<<endl;
    }else{
        cout<<"Not a palindrome number."<<endl;
    }
    return 0;
}
