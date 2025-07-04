class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*--------------TLE O(N^2)-------------------*/
        /*vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int p=1;
            //prefix
            for(int j=0;j<i;j++){
                p=p*nums[j];
            }
            //suffix
            for(int k=i+1;k<nums.size();k++){
                p=p*nums[k];
            }
            ans.push_back(p);
        }*/
        vector<int>ans(nums.size(),1);
        //left
        int left=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=left;
            left=left*nums[i];
        }
        //right
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
};
