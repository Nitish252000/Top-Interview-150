class Solution {
    public int maxProfit(int[] prices) {
        /*-----------TLE-------------*/
        // int maxip=0;
        // for(int i=0;i<prices.length;i++){
        //     for(int j=i+1;j<prices.length;j++){
        //         maxip=Math.max(maxip,prices[j]-prices[i]);
        //     }
        // }
        // return maxip;
        int maxip=0;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++){
            mini=Math.min(mini,prices[i]);
            maxip=Math.max(maxip,prices[i]-mini);
        }
        return maxip;
    }
}
