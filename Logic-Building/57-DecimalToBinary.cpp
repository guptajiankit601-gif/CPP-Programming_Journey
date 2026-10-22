#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int binary = 0;
    int place = 1;

    while(n > 0){
        int remainder = n % 2;
        binary = binary + remainder * place;

        place = place * 10;
        n = n / 2;
    
    }
    cout<<"Binary is: "<<binary<<endl;

    return 0;
}
