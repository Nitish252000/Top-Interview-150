class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto i:s){
            if(!isalnum(i))continue;
            else if(isupper(i))str+=tolower(i);
            else str+=i;
        }
        string cmp=str;
        reverse(str.begin(),str.end());
        return cmp==str;
    }
};
