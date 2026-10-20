#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int largest = 0;
    
    while(n > 0){
        int digit = n % 10;

        if(digit > largest){
            largest = digit;
        } 
        n = n / 10;
    }
    cout<<"Largest digit: "<<largest<<endl;
    return 0;
}
