#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the number: ";
    cin>>n;

    int original = n;
    int square = n * n;
    int sum = 0;
    
    while(square > 0){
        int digit = square % 10;
        sum = sum + digit;
        square /= 10;
    }

    if(sum == original){
        cout << original << " is a neon number." << endl;
    }else{
        cout << original << " is not a neon number." << endl;
    }
    
    return 0;
}
