#include<iostream>
#include<cstring>
using namespace std;

/*
    -->>Geekforgeek Question
    Maximum Occuring Character
    Input= mannthru
    Output= n;
*/


char getMaxOccuringChar(string s){
    int arr[26]={0};

    // create an array of count of character
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        // lowercase
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    // Find maximum occurance
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;

}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<getMaxOccuringChar(str)<<endl;


}