class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxA = 0;
        int start = 0, end = n - 1;
        while (start < end) {
            int width = end - start;
            int minh = min(height[start], height[end]);
            maxA = max(maxA, width * minh);

            if(height[start]<height[end])start++;
            else end--;
        }
        return maxA;
    }
};
