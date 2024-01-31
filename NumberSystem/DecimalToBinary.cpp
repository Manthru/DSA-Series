#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
// ----->>Decimal to binary
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    float ans=0;
    float i=0;

    while(n!=0){
        float bit = n &1;
        ans=(bit * pow(10,i))+ans;
        n = n >> 1 ;

        i++;
    }

    cout<<ans<<endl;

    return 0;
}