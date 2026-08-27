#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
            // Hash map to store: key = number, value = its index
                    std::unordered_map<int, int> num_map;
                            
                                    for (int i = 0; i < nums.size(); ++i) {
                                                int complement = target - nums[i];
                                                            
                                                                        // Check if the complement already exists in the map
                                                                                    if (num_map.find(complement) != num_map.end()) {
                                                                                                    // Found the pair, return their indices
                                                                                                                    return {num_map[complement], i};
                                                                                                                                }
                                                                                                                                            
                                                                                                                                                        // Otherwise, store the current number and its index
                                                                                                                                                                    num_map[nums[i]] = i;
                                                                                                                                                                            }
                                                                                                                                                                                    
                                                                                                                                                                                            // Return an empty vector if no solution exists (though LeetCode guarantees one)
                                                                                                                                                                                                    return {};
                                                                                                                                                                                                        }
                                                                                                                                                                                                        };
                                                                                                                                                                                                        
