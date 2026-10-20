#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    while(n % 3 == 0 && n > 1){
        n = n / 3;
    }
    if(n == 1){
        cout<<"Power of 3"<<endl;
    }else{
        cout<<"Not a Power of 3"<<endl;
    }
    return 0;
}
