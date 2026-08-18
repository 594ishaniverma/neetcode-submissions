class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int longest_str=0;
        int max_frequency=0;
        for(int right=0;right<s.length();right++){
            freq[s[right]-'A']++;
            max_frequency=max(max_frequency,freq[s[right]-'A']);
            while(((right-left+1)-max_frequency)>k){
                freq[s[left]-'A']--;
                left++;
                 max_frequency=0;
                for(int i=0;i<freq.size();i++){
                    max_frequency=max(max_frequency,freq[i]);
                }
            }
            longest_str=max(longest_str,(right-left+1));
        }
        return longest_str;
        
    }
};
