class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        
        int left = 0;
        int right = height.size() - 1;
        
        int left_max = 0;
        int right_max = 0;
        
        int water_trapped = 0;
        
        while (left < right) {
            // The water level is bottlenecked by the left side
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left]; // Update the left maximum
                } else {
                    water_trapped += left_max - height[left]; // Calculate trapped water
                }
                left++;
            } 
            // The water level is bottlenecked by the right side
            else {
                if (height[right] >= right_max) {
                    right_max = height[right]; // Update the right maximum
                } else {
                    water_trapped += right_max - height[right]; // Calculate trapped water
                }
                right--;
            }
        }
        
        return water_trapped;
    }
};
