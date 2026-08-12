class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>anagram(26,0);
        if(t.length()!=s.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            anagram[s[i]-'a']++;
        }
        for(int j=0;j<t.length();j++){
            if(anagram[t[j]-'a']==0){
                return false;
            }
            anagram[t[j]-'a']--;
        }
return true; 
    }
};
