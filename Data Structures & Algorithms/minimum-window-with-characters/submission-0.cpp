class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> countT; // Characters we need
        unordered_map<char, int> window; // Characters we currently have

        // Populate what we need from string t
        for (char c : t) {
            countT[c]++;
        }

        int have = 0; // Number of unique characters whose requirement is fully met
        int need = countT.size(); // Total unique characters we need to match

        int minLen = INT_MAX;
        int minLeft = 0; 
        int left = 0; // Left pointer of our sliding window

        // Expand the window with the right pointer
        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            window[c]++;

            // If this character is in 't' AND we just hit the exact count we need
            if (countT.count(c) && window[c] == countT[c]) {
                have++;
            }

            // Shrink the window from the left as long as it's valid
            while (have == need) {
                // 1. Update the minimum window result
                int currentWindowSize = right - left + 1;
                if (currentWindowSize < minLen) {
                    minLen = currentWindowSize;
                    minLeft = left;
                }

                // 2. Remove the leftmost character from our window
                char leftChar = s[left];
                window[leftChar]--;

                // 3. Check if removing this character broke our valid window
                if (countT.count(leftChar) && window[leftChar] < countT[leftChar]) {
                    have--; // We no longer have enough of this character
                }
                left++; // Actually move the pointer
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }
        return s.substr(minLeft, minLen);
    }
};