#include<iostream>
using namespace std;

/*
    input={1,4,2,5,36,9}
    output={max=36,min=1}
    
*/

// --->>Function to find the max number

    int Maxvalue(int arry[],int size){

        int max=INT32_MIN;
        for(int i=0;i<size;i++){
            if(arry[i]>max){
                max=arry[i];
            }

        }
        return max;
    }
    
//   --->>Function for to find Minimum value
   
   int Minvalue(int arry[],int size){

        int min=INT32_MAX;
        for(int i=0;i<size;i++){
            if(arry[i]<min){
                min=arry[i];
            }

        }
    return min;

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

    int Max=Maxvalue(arry,n);
    cout<<"Maximum value in the arry: " <<Max<<endl;

    int Min=Minvalue(arry,n);
    cout<<"Minimum value in the arry: "<<Min<<endl;

        
    return 0;

    
}