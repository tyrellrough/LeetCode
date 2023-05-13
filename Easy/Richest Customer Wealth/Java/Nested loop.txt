class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        
        for(int[] account : accounts) {
            int currentCustomerWealth = 0;
            
            for(int money : account) {
                currentCustomerWealth += money;
            }
            max = Math.max(max, currentCustomerWealth);
        }
        return max;
    }
    
}