#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int a = n;
    int b = n * 2;
    int c = n * 3;

    int count[10] = {0};

    while(a > 0){
        count[a % 10]++;
        a = a / 10;
    }

    while(b > 0){
        count[b % 10]++;
        b = b / 10;
    }

    while(c > 0){
        count[c % 10]++;
        c = c / 10;
    }

    bool fascinating = (n > 0);

    for(int i = 1; i <= 9; i++){
        if(count[i] != 1){
            fascinating = false;
            break;
        }
    }

    if(count[0] != 0){
        fascinating = false;
    }

    if(fascinating){
        cout<< n <<" is a fascinating number."<<endl;
    }else{
        cout<< n <<" is not a fascinating number."<<endl;
    }

    return 0;
}
