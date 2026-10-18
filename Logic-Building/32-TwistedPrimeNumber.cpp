#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int original = n;
    int reverse = 0;

    while(n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    bool isPrime1 = true;

    if(original < 2){
        isPrime1 = false;
    }

    for(int i  = 2; i * i <= original; i++){
        if(original % i == 0){
            isPrime1 = false;
            break;
        }
    }

    bool isPrime2 = true;

    if(reverse < 2){
        isPrime2 = false;
    }

    for(int i  = 2; i * i <= reverse; i++){
        if(reverse % i == 0){
            isPrime2 = false;
            break;
        }
    }

    if(original > 0 && isPrime1 && isPrime2){
        cout << original << " is a Twisted Prime number." << endl;
    }else{
        cout << original << " is not a Twisted Prime number." << endl;
    }

    return 0;
}
