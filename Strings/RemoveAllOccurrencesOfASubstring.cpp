#include<iostream>
using namespace std;
class Solution{
    public:
        string removeOccurrences(string s, string part) {
    
        while(s.length() !=0  && s.find(part) < s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        
    }

};
class printout{
    public:
        void print(string s){
            for(int i=0;i<s.length();i++){
                cout<<s[i]<<"";
            }
        }

};

int main(){

    Solution get;
    get.removeOccurrences( "daabcbaabcbc", "abc");

    printout out;
    out.print(get.removeOccurrences( "daabcbaabcbc", "abc"));
    
    return 0;
   
}