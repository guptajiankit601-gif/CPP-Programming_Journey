#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n <= 1){
        cout<<"It's not a prime number."<<endl;
        return 0;
    }
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"It's a prime number."<<endl;
    }else{
        cout<<"It's not a prime number."<<endl;
    }

    return 0;
}
