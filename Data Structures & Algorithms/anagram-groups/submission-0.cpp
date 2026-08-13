class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>grpangram;
        for(int i=0;i<strs.size();i++){
            string original=strs[i];
            string sorted=original;
            sort(sorted.begin(),sorted.end());
            grpangram[sorted].push_back(original);
        }
        vector<vector<string>>ans;
        for(auto i:grpangram){
            ans.push_back(i.second);
        }
        return ans;
    }
};
