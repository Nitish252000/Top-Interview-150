class Solution {
public:
    string check(string s1,string s2){
        string res;
        int k=min(s1.size(),s2.size());
        for(int i=0;i<k;i++){
            if(s1[i]!=s2[i])break;
            res+=s1[i];
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        string ans;
        for(int i=0;i<strs.size();i++){
            ans=check(prefix,strs[i]);
            prefix=ans;
        }
        return ans;
    }
};
