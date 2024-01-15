#include<iostream>
using namespace std;

/*
    input={1,2,3,4,1,3,2}
    output={4}
*/

// --->>Function of to find unique element

int unique(int arry[],int n){
    
    int ans=0;
    int total[n];
    for(int i=0;i<n;i++){
        ans=ans^arry[i];
        
    }
    if(ans==0){
        return 0;
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

    int ans=unique(arry,n);
    cout<<"Unique element in a arry: "<<ans;

}