class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();
        for (String ch : tokens) {
            if (ch.equals("+")) {
                int op1 = st.pop();
                int op2 = st.pop();
                st.push(op2 + op1);
            } else if (ch.equals("-")) {
                int op1 = st.pop();
                int op2 = st.pop();
                st.push(op2 - op1);
            } else if (ch.equals("*")) {
                int op1 = st.pop();
                int op2 = st.pop();
                st.push(op2 * op1);
            } else if (ch.equals("/")) {
                int op1 = st.pop();
                int op2 = st.pop();
                st.push(op2 / op1);
            } else {
                st.push(Integer.parseInt(ch));
            }
        }
        return st.pop();
    }
}
