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
    bool found = false;
    while(reversed > 0){
        int digit = reversed % 10;
        int count = 0;
        temp = n;

        while(temp > 0){
            if(temp % 10 == digit){
                count++;
            }
            temp /= 10;
        }
        if(count == 1){
            cout<<"First non-repeating digit: "<<digit;
            found = true;
            break;
        }
        reversed = reversed / 10;
    }
    if(!found){
        cout<<"No non-repeating digit";
    }

    return 0;
}
