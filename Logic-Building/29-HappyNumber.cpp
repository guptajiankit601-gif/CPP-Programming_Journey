#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int seen[1000] = {0};

    while(n != 1 && n > 0 && n < 1000 && seen[n] == 0){
        seen[n] = 1;

    int sum = 0;

        while(n > 0){
            int digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }
        n = sum;    
    }
    if(n == 1){
        cout<<"Happy number."<<endl;
    }else{
        cout<<"Not a Happy number."<<endl;
    }
    
    return 0;
}
