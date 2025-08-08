class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //----------Will give TLE-----
        // for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //         if(numbers[i]+numbers[j]==target)return {++i,++j};
        //     }
        // }
        // return {};

        //------S.C=O(N)------------
        // unordered_map<int,int>mp;
        // for(int i=0;i<numbers.size();i++){
        //     if(mp.count(target-numbers[i])){
        //         return {mp[target-numbers[i]]+1,++i};
        //     }
        //     mp[numbers[i]]=i;
        // }
        // return {};


        //---array is already sorted: follow binary search algorithm

        int start=0,end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                return {start+1,end+1};
            }
            else if(numbers[start]+numbers[end]<target)start++;
            else end--;
        }
        return {};
    }
};
