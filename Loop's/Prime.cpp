#include<iostream>
using namespace std;

/*
    Input= n=5
    Output= Prime
*/

int main(){


    //Prime or not
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isprime=1;

    for(int i=2;i<=(n-1);i++){

        if(n%i==0){
            cout<<"Not a prime number: ";
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not a prime: "<<n<<endl;
    }
    else{
        cout<<"Prime: "<<n<<endl;
    }

    return 0;


}
