#include<iostream>
using namespace std;

/*
    input={1,2,3,4,5,6}
    output={2,1,4,3,6,5}
*/

// --->>function for swap alternate

int swapalternate(int arry[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arry[i],arry[i+1]);
        }
    }

}

// --->>Function for printout the arry

void print(int arry[],int n){

    for(int i=0;i<n;i++){
    cout<<arry[i]<<" ";
   }
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

    swapalternate(arry,n);
    print(arry,n);

    return 0;

}