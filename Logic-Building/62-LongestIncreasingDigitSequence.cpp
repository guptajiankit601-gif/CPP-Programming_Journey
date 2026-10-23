#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp = n;
    int reversed = 0;

    while(temp > 0){
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    int previous = -1;
    int currentLength = 0;
    int longestLength = 0;

    while(reversed > 0){
        int digit = reversed % 10;

        if(digit > previous){
            currentLength++;
        }else{
            currentLength = 1;
        }

        if(currentLength > longestLength){
            longestLength = currentLength;
        }

        previous = digit;
        reversed /= 10;
    }

    cout<<"Longest increasing sequence length: "<<longestLength<<endl;
    
    return 0;
}
