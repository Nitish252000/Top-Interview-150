class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>res;
        int n=nums.size();
        k=k%n;
        for(int i=n-k;i<n;i++){
            res.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            res.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=res[i];
        }
    }
};
