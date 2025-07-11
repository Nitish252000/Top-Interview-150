class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        for(int i=0;i<haystack.size();i++){
            if(needle[0]==haystack[i] && haystack.substr(i,needle.size())==needle)return i;
        }
        return index;
    }
};
