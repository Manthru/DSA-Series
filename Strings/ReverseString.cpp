#include<iostream>
using namespace std;

/*

    Input= string="manthru";
    Output= urhtnam

*/

// Function for reverse a string
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

// Function for to get length of the string
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

    int n=getlength(name);
    reverse(name,n);
    cout<<"Reverse: "<<name<<endl;

    return 0;
}