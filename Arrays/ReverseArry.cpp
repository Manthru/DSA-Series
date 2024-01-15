#include<iostream>
using namespace std;

/*
    input={1,2,3,4,5}
    output={5,4,3,2,1}
*/

// --->>Function for reverse a arry

void rev(int arry[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arry[start],arry[end]);
        start++;
        end--;

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
    rev(arry,n);
    print(arry,n);

    return 0;
}