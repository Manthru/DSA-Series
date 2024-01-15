#include<iostream>
using namespace std;

/*
    input={1,2,3,4,5}
    output={15}
*/


// --->>Function for sum of elements in a arry

int Add(int arry[],int n){

    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arry[i];
    }
    return ans;
}


int main(){

    int n;
    cout<<"Enter a size of arry: ";
    cin>>n;

    int arry[n];
    cout<<"Enter the elements in the arry: ";

    for(int i=0;i<n;i++){
        cin>>arry[i];
    }

    int sum=Add(arry,n);

    cout<<"Sum of the elements: "<<sum<<endl;

    return 0;
}