class Solution {
    private void reverse(int[] nums,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    public void rotate(int[] nums, int k) {
        int[] res = new int[nums.length];
        int n = nums.length;
        k = k % n;
        // int j = 0;
        // for (int i = n - k; i < n; i++) {
        //     res[j] = nums[i];
        //     j++;
        // }
        // for (int i = 0; i < n - k; i++) {
        //     res[j] = nums[i];
        //     j++;
        // }
        // for (int i = 0; i < n; i++) {
        //     nums[i] = res[i];
        // }
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
}
