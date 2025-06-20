class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(auto num:nums){
            fq[num]++;
        }
        for(auto i:fq){
            if(i.second>ceil(nums.size()/2))return i.first;
        }
        return -1;
    }
};
