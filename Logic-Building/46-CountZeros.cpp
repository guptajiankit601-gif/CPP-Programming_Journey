#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit == 0){
            count++;
        }

        n = n / 10;
    }
    cout<<"Total zeros: "<<count<<endl;

    return 0;
}
