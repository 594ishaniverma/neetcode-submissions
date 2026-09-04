class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>duplicate;
        for(int i=0;i<nums.size();i++){
            duplicate[nums[i]]++;
        }
        for(auto i:duplicate){
            if(i.second>1){
                return true;
            }
        }
       return false;
        }
    
};