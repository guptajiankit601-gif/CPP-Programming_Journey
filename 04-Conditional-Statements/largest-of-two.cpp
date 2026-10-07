#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>> a ;
    cout<<"Enter the Value of b: ";
    cin>>b;
    if(a > b){
        cout<<"Largest : "<< a;
    }else{
        cout<<"Largest : "<< b;
    }
    return 0;
}
