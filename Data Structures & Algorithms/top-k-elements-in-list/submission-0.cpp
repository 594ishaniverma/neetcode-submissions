class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>top;
        for(int i=0;i<nums.size();i++){
            top[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto i:top){
            q.push({i.second,i.first});
        }
        vector<int>result;
        while(!q.empty()&& k>0){
            result.push_back(q.top().second);
            q.pop();
            k--;
        }
        return result;
    }
};
