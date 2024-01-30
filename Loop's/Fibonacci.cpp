#include<iostream>
using namespace std;

/*
    Input= n=3;
    Output= 0 1 1 2 3
*/

int main(){

 //fibonacci series
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){

        int next=a+b;
        cout<<next<<" ";

        a=b;
        b=next;
    }
    return 0;

}