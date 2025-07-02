class Solution {
    public void rotate(int[] nums, int k) {
       int[] res=new int[nums.length]; 
       int n=nums.length;
       k=k%n;
       int j=0;
       for(int i=n-k;i<n;i++){
        res[j]=nums[i];j++;
       }
       for(int i=0;i<n-k;i++){
        res[j]=nums[i];j++;
       }
       for(int i=0;i<n;i++){
        nums[i]=res[i];
       }
    }
}
