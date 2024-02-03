#include<iostream>
#include<cstring>
using namespace std;

// Function to convert a character into lowercase
int lowercase(char ch){
    if( (ch >='a' && ch <='z') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Function for to convert a character into uppercase
int uppercase(char ch){
    if( (ch >='A' && ch <='B') )
        return ch;
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

int main(){
    char name[20];
    cout<<"Enter name:";
    cin>>name;
    string temp1="";
    string temp2="";

    for(int i=0;i<name[i] !='\0';i++){
        temp1.push_back(lowercase(name[i]));
    }
    cout<<temp1<<endl;


    for(int i=0;i<name[i] !='\0';i++){
         temp2.push_back(uppercase(name[i]));
         
    }
    cout<<temp2<<endl;


    return 0;
}
