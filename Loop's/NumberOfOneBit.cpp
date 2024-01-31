#include<iostream>
using namespace std;


/*
    Input= n=000001011
    Output= 3
*/

int main(){

    
 // >>>Number of 1bit
    int n=000001011;
    int count=0;

    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;

    return 0;

}