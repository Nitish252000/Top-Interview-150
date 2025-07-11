class Solution {
public:
    int check(char ch) {
        switch (ch) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
        }
    }
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && check(s[i]) < check(s[i + 1]))
                ans -= check(s[i]);
            else {
                ans += check(s[i]);
            }
        }
        return ans;
    }
};
