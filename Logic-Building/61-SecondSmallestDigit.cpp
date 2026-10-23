#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int smallest = 10;
    int secondSmallest = 10;

    while(n > 0){
        int digit = n % 10;

        if(digit < smallest){
            secondSmallest = smallest;
            smallest = digit;
        }else if(digit > smallest && digit < secondSmallest){
            secondSmallest = digit;
        }
        n = n / 10;
    }
    if(secondSmallest == 10){
        cout<<"No Second smallest digit."<<endl;
    }else{
        cout<<"Second Smallest digit: "<<secondSmallest<<endl;
    }
    return 0;
}
