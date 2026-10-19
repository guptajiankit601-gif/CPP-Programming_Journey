#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    int count = 0;
    
    for(int i = 1; i<= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    cout << "Total factors of " << n << " is: " << count << endl;
  
    return 0;
}
