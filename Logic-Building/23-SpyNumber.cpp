#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the number: ";
    cin>>n;

    int original = n;
    int sum = 0;
    int product = 1;

    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n /= 10;
    }

    if(sum == product){
        cout << original << " is a spy number." << endl;
    }else{
        cout << original << " is not a spy number." << endl;
    }
    return 0;
}
