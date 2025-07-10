class Solution {
    String check(String s1,String s2){
        int k=Math.min(s1.length(),s2.length());
        String res="";
        for(int i=0;i<k;i++){
            if(s1.charAt(i) != s2.charAt(i))break;
            res+=s1.charAt(i);
        }
        return res;
    }
    public String longestCommonPrefix(String[] strs) {
        String prefix=strs[0];
        for(int i=1;i<strs.length;i++){
            prefix=check(prefix,strs[i]);
        }
        return prefix;
    }
}
