class Solution {
public:
    // string helper(string &word){
    //     int s=0;
    //     int e=word.size()-1;
    //     string reversed = word;
    //     while (s < e) {
    //         swap(reversed[s], reversed[e]);
    //         s++;
    //         e--;
    //     }
    //     return reversed;
    // }
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string res;
        while(ss>>word){
            res=word+" "+res;
        }
        res.pop_back(); // remove last space
        return res;
    }
};
