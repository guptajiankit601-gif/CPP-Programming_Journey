#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;

    while(n >= 10){
        int right = n % 10;
        int left = (n / 10) % 10;

        if(left > right){
            count++;
        }
        n /= 10;
    }
    cout << "Count is: " << count << endl;
    
    return 0;
}
