https://leetcode.com/problems/perfect-squares/


class Solution {
public:
    int numSquares(int n) {
        
        vector<int> sq;
        vector<int> dp(n+1,0);
        for(int i = 1; i <= sqrt(n);i ++){
            sq.push_back(i*i);
        }
        dp[0] = 0;
        
        for(int i = 1; i <= n ; i++) {
            int min = INT_MAX;
            
            for(int j = sq.size() -1; j >=0; j--) {
                
                if(i - sq[j] >= 0) {
                    int curr = dp[i - sq[j] ] + 1;
                    if(curr < min){
                        min = curr;
                    }
                }
            }
            dp[i] = min;
        }
        
        return dp[n];
    }
};
