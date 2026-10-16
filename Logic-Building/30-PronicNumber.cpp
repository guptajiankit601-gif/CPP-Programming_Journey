#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin>>n;

    bool found = false;

    for(int i = 0; i * (i+1) <= n; i++){
        if(i*(i+1) == n){
            found = true;
            break;
        }
    }

    if(found){
        cout << n << " is a Pronic number." << endl;
    }else{
        cout << n << " is not a Pronic number." << endl;
    }

    return 0;
}
