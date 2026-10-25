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
    int maxDiff = arr[1] - arr[0];

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int diff = arr[j] - arr[i];

            if(diff > maxDiff){
                maxDiff = diff;
            }
        }
    }
    cout<<"Maximum difference: "<<maxDiff<<endl;
}
