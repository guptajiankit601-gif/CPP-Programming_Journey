#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int num = n + 1;
    bool found = false;

    for(int i = 1; i * i <= num; i++){
        if(i * i == num){
            found = true;
            break;
        }
    }
    if(n >= 0 && found){
        cout<< n <<" is a sunny number."<< endl;
    }else{
        cout<< n <<" is not a sunny number."<< endl;
    }
    
    return 0;
}
