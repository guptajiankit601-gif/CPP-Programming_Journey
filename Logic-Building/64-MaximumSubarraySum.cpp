#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int maxSum = arr[0];

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum > maxSum){
                maxSum = sum;
            }
        }
    }
    cout<<"Maximum subarray sum: "<<maxSum<<endl;

    return 0;
}
