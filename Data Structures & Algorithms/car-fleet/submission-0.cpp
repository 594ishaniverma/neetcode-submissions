class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>cars(n);
        //combine position and speed
        for(int i=0;i<n;i++){
            cars[i]={position[i],speed[i]};
        }
        //sort by closest to target first cars 
        sort(cars.rbegin(),cars.rend());
        stack<float>fleets;
        for (int i=0;i<n;i++){
            //calculate the independent time to reach target
            float time= (float)(target-cars[i].first)/cars[i].second;
            if(fleets.empty()||time>fleets.top()){
                fleets.push(time);
            }
        }
        return fleets.size();
    }
};
