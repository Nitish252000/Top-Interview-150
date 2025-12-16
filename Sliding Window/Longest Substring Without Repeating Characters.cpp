class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int n = s.size();
        int maxi = 0;
        set<char> st;
        for (int right = 0; right < n; right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxi = max(maxi, right - left + 1);
        }
        return maxi;
    }
};




// ❓ What happens if you use if instead of while?
    // WHY if FAILS (Core Reason)   
        // When you see a duplicate character,
        // you must remove characters until the duplicate is gone.  
        // Sometimes removing just one character is NOT enough.


// One-Line Interview Explanation

// “We use while because there can be multiple characters to remove before the window becomes valid again.”
