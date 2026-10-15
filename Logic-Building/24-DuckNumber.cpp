#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int original = n;
    bool foundZero = false;

    while(n > 0){
        int digit = n % 10;

        if(digit == 0){
            foundZero = true;
        }

        n /= 10;
    }
    if(original > 0 && foundZero){
        cout << original << " is a Duck number." << endl;
    }else{
        cout << original << " is not a duck number." << endl;
    }

    return 0;
}
