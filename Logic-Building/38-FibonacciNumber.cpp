#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    int first = 0;
    int second = 1;
    
    bool found = false;

    while(first <= n){
        if(first == n){
            found = true;
            break;
        }
        int nextDigit = first + second;
        first = second;
        second = nextDigit;
    }

    if(found){
        cout<<"Fibonacci Number";
    }else{
        cout<<"Not a Fibonacci Number";
    }
    
    return 0;
}
