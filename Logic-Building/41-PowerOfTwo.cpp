#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    while(n % 2 == 0 && n > 1){
        n = n / 2;
    }
    if(n == 1){
        cout<<"Power of 2"<<endl;
    }else{
        cout<<"Not a Power of 2"<<endl;
    }
    return 0;
}
