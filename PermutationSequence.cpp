https://leetcode.com/problems/permutation-sequence/

class Solution {
public:
    vector<int> fact, d;
    
    
    void helper(string &ans, int n, int k) {
        if(n == 1){
            ans +=to_string(d.back());
            return;
        }
        int index = k/fact[n-1];
        
        if(k % fact[n-1] == 0) {
            index -= 1;
        }
        
        ans += to_string(d[index]);
        
        d.erase(d.begin() + index);
        k -= fact[n-1]*index;
        
        helper(ans, n-1, k);
        
    }
    string getPermutation(int n, int k) {
        int f = 1;
        fact.push_back(1);
        
        for(int i = 1; i < n; i++) {
            f *= i;
            fact.push_back(f);
        }
        
        for(int i = 1; i <= n; i++) {
            d.push_back(i);
        }
        string ans = "";
        
        helper(ans, n, k);
        
        return ans;
        
    }
};
