#include<iostream>
using namespace std;
int main(){
    int age = 20;
    bool hasID = true;

    if(age >= 18){
        if(hasID){
            cout<<"Entry allowed.";
        }else{
            cout<<"ID required.";
        }
    }else{
        cout<<"Entry not allowed";
    }
    return 0;
}
