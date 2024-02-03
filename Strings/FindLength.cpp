#include<iostream>
using namespace std;

/*

    Input= string="manthru"
    Output= 7;

*/


// Function for to find length of string
int getlength(char name[]){
    int count=0;
    for(int i=0;i<name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<getlength(name)<<endl;

    return 0;

}