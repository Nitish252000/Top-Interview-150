class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int k=n+m-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
                k--;
            }else{
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }
        while(j>=0){
            nums1[k]=nums2[j];
            j--;
            k--;
        }
    }
};
/*
✅ Problem context:
You're given:
 -> nums1 has m valid elements followed by n extra zeroes to hold nums2.
 -> nums2 has n sorted elements.

Your task: merge both into nums1 in-place while keeping the result sorted.

⚠️ Problem with merging from the front:
If you try to merge from the front (left to right), you risk overwriting values in nums1 before you've used them.

  For example:
      nums1 = [1, 3, 5, 0, 0, 0], m = 3
      nums2 = [2, 4, 6], n = 3
If you start writing to nums1[0] directly, you might overwrite 1, 3, or 5 before you've finished comparing all elements.

✅ Why merging from the back works:
    You use three pointers:
   -> i points to the last valid element in nums1 (index m - 1)
   -> j points to the last element in nums2 (index n - 1)
   -> k points to the end of the array nums1 (index m + n - 1)

Since you're writing values into the unused space at the end, you avoid overwriting any values you still need to read.*/
