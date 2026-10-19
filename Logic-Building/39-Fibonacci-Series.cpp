#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    int first = 0;
    int second = 1;
    
    for(int i = 1; i <= n; i++){
        cout<< first <<" ";

        int nextDigit = first + second;
        first = second;
        second = nextDigit;
    }

    return 0;
}
