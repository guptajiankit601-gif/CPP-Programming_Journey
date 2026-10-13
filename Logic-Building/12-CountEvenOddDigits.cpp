#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 0){
        num = -num;
    }

    int evenCount = 0;
    int oddCount = 0;

    if(num == 0){
        evenCount = 1;
    }else{
        while(num != 0){
        int digit = num % 10;
            if(digit % 2 == 0){
                evenCount++;
            }else{
                oddCount++;
            }
            num = num / 10;
        }
    }
    cout << "Even digits: " << evenCount << endl;
    cout << "Odd digits: " << oddCount << endl;

    return 0;
}
