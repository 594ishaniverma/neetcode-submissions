class Solution {
public:
    bool isPalindrome(string s) {
        
        string newstring="";
        for(int i=0;i<s.length();i++){
            if( isalnum(s[i])){
               newstring +=tolower(s[i]) ;
            }
        }
        string revstring="";
        for(int i=newstring.length()-1;i>=0;i--){
            revstring +=newstring[i];
        }
        if(newstring==revstring){
            return true;
        }
        return false;
    }
};
