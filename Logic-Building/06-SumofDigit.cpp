#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num < 0){
        num = -num;
    }
    
    int sum = 0;

    while(num != 0){
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    cout<< "Sum of digits: "<< sum << endl;

    return 0;
}
