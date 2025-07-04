class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans=new int[nums.length];
        Arrays.fill(ans,1);

        // left
        int left=1;
        for(int i=0;i<nums.length;i++){
            ans[i]=left;
            left*=nums[i];
        }
        //right
        int right=1;
        for(int i=nums.length-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
}
