
https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 0) return res;
        vector<int> temp;
        temp.push_back(1);
        res.push_back(temp);
        if(numRows == 1) return res;
        
        numRows--;
        vector<int> curr;
        while(numRows--) {
            curr.push_back(1);
            for(int i = 0; i < temp.size()- 1; i++) {
                curr.push_back(temp[i] + temp[i+1]);
            }
            curr.push_back(1);
            
            res.push_back(curr);
            temp = curr;  
            curr.clear();
        }
        return res;
        
    }
};
