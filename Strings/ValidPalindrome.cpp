#include<iostream>
#include<cstring>
using namespace std;


/*
    Leet Code Question= 125
*/

class Solution {
private:

    // Function for to find valid or not
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }


    // Function for to convert into lowercase
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


    // Function for to check it is palindrome or not
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

public:
    bool isPalindrome(string s) {
        
        string temp = "";

        //Remove the all invalid characters link whitespace, symbols are etc.
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //Convert to lowercase
        for(int j=0; j<temp.length(); j++) { 
            // Calling the function valid or not
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};

int main(){
    Solution convert;
    convert.isPalindrome("A man, a plan, a canal: Panama");

    return 0;
}