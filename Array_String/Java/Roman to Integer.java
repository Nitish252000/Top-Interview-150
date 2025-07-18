class Solution {
    private int check(char ch) {
        switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
    public int romanToInt(String s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && check(s.charAt(i)) < check(s.charAt(i+1)))
                ans -= check(s.charAt(i));
            else {
                ans += check(s.charAt(i));
            }
        }
        return ans;
    }
}
