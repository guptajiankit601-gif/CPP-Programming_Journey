#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num < 0){
        num = -num;
    }
    
    int prod = 1;
    
    if(num == 0){
        prod = 0;
    }else{
        while(num != 0){
        int digit = num % 10;
        prod *= digit;
        num = num / 10;
        }
    }

    cout<< "Product of digits: "<< prod << endl;

    return 0;
}
