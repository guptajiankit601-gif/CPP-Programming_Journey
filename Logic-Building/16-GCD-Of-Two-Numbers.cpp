#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int smaller;
    if(a > b){
        smaller = b;
    }else{
        smaller = a;
    }
    int gcd = 1;

    for(int i = 1; i <= smaller; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout << "GCD: " << gcd <<endl;

    return 0;
}
