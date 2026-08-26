#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
            // If lengths differ, they cannot be anagrams
                    if (s.length() != t.length()) {
                                return false;
                                        }
                                                
                                                        // Array to store counts of 26 lowercase English letters
                                                                std::vector<int> count(26, 0);
                                                                        
                                                                                // Increment for string s and decrement for string t
                                                                                        for (int i = 0; i < s.length(); i++) {
                                                                                                    count[s[i] - 'a']++;
                                                                                                                count[t[i] - 'a']--;
                                                                                                                        }
                                                                                                                                
                                                                                                                                        // If they are anagrams, every bucket must balance out to 0
                                                                                                                                                for (int val : count) {
                                                                                                                                                            if (val != 0) {
                                                                                                                                                                            return false;
                                                                                                                                                                                        }
                                                                                                                                                                                                }
                                                                                                                                                                                                        
                                                                                                                                                                                                                return true;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    };
                                                                                                                                                                                                                    
 