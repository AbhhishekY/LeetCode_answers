https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long> x(amount + 1,0);
        
        for(int i = 1; i <= amount; i++) {
            long min = INT_MAX;
            
            for(auto j : coins){
                if(i - j >= 0) {
                    long  curr = x[i - j] + 1;
                    
                    if(curr < min) {
                        min = curr;
                    }
                    
                }
            }
            
            x[i] = min < 0 ? -1 : min;
        }
        for(auto i : x){
            cout<<i<<" ";
        }
        
        return x[amount] == INT_MAX ? -1 : x[amount];
    }
};
