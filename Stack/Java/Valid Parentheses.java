class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        char[] str = s.toCharArray();
        for (char ch : str) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty())
                    return false;
                if (ch == ')' && st.pop() != '(') {
                    return false;
                }
                if (ch == '}' && st.pop() != '{') {
                    return false;
                }
                if (ch == ']' && st.pop() != '[') {
                    return false;
                }
            }
        }
        return st.empty(); // Stack must be empty at the end for the string to be valid
    }
}
