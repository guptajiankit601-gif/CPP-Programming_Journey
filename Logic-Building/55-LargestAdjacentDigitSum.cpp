#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int maxSum = 0;

    while(n >= 10){
        int last = n % 10;
        int previous = (n / 10) % 10;

        int sum = last + previous;

        if(sum > maxSum){
            maxSum = sum;
        }
        n /= 10;
    }
    cout<<"Maximum Sum is: "<<maxSum<<endl;

    return 0;
}
