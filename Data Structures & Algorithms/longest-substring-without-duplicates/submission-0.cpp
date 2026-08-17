class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int max_length=0;
        vector<int>freq(128,0);
        for(int right=0;right<s.length();right++){
            while(freq[s[right]]>0){
                freq[s[left]]--;
                left++;
            }
            freq[s[right]]++;
            max_length=max(max_length,right-left+1);
        }
        return max_length;
    }
};
