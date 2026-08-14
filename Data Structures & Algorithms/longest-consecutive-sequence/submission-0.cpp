class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_length=1;
        int current_streak=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i< (int)nums.size()-1;i++){
            if(nums[i] == nums[i+1]) continue;
            if(nums[i]==nums[i+1]-1){
                current_streak++;
            } else {
                current_streak = 1;
            }
            max_length=max(max_length, current_streak);
        }
        return max_length;
    }
};