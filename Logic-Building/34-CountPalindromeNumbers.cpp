#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    int count = 0;

    for(int i = 1; i <= n; i++){
        int original = i;
        int temp = i;
        int rev = 0;
    
        while(temp > 0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        
            if(rev == original){
                count++;
            }
        }
    }

    cout<<"Total Palindrome numbers: "<<count<<endl;

  return 0;
}
