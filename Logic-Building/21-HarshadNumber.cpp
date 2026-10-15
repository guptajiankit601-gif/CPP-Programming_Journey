#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the number: ";
    cin>>n;

    int original = n;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if(sum != 0 && original % sum == 0){
        cout << original << " is a Harshad number." << endl;
    }else{
        cout << original << " isnot a harshad number." << endl;
    }
    return 0;
}
