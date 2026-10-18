#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int reverse = 0;

    while(n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    bool isPrime = true;

    if(reverse < 2){
        isPrime = false;
    }

    for(int i  = 2; i * i <= reverse; i++){
        if(reverse % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << reverse << " is a Prime number." << endl;
    }else{
        cout << reverse << " is not a Prime number." << endl;
    }

    return 0;
}
