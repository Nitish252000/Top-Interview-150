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
