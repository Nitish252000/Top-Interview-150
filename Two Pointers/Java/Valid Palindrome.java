class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder str=new StringBuilder();
        for(char i:s.toCharArray()){
            if(Character.isLetterOrDigit(i))str.append(Character.toLowerCase(i));         
        }
        StringBuilder cmp=new StringBuilder(str);
        cmp.reverse();
        return str.toString().equals(cmp.toString());
    }
}
