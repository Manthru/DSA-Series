#include<iostream>
using namespace std;

/*

    Input= string="Manthru";
    Output= 0;

*/

// Function for to check palindrome
bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

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
   cout<<"Enter any thing: ";
   cin>>name;

   int n=getlength(name);
   cout<<checkpalindrome(name,n)<<endl;

    return 0;


}