#include<iostream>
#include<vector>
using namespace std;

/*
    Input= {1,2,3,4}, Rotate=2;
    Output= {3,4,1,2}
*/

// Function for rotate the array
void rotate(int arr[],int k,int size){

    vector<int>temp(size);
    for(int i=0;i<size;i++){
        temp[(i+k)%size]=arr[i];
    }

    // Loop for printout the array
    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
    
}

int main(){
    int num[4]={1,2,3,4};
    rotate(num,2,4);
    return 0;

}