#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    if(temp == 0){
        digits = 1;
    }else{
        while(temp > 0){
            digits++;
            temp = temp / 10;
        }
    }
    temp = n;

    while(temp > 0){
        int digit = temp % 10;
        int power = 1;
        for(int i = 1; i<=digits; i++){
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    
    if(original == sum){
        cout<<original<<" is an Armstrong Number."<<endl;
    }else{
        cout<<original<<" is not an armstrong number."<<endl;
    }
    return 0;
}
