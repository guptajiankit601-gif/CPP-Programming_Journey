#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        int leftSum = 0;
        int rightSum = 0;

        for(int j = 0; j<i; j++){
            leftSum += arr[j];
        }

        for(int j = i+1; j<n; j++){
            rightSum += arr[j];
        }
        if(leftSum == rightSum){
            cout<<"Equilibrium Index: "<<i;
            return 0;
        }
    }
    cout<<"No Equilibrium Index";

    return 0;
}
