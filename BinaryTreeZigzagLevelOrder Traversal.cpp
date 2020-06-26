
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> Q;
        
        Q.push(root);
        int x = 0;
        int count = Q.size();
        vector<int> temp;
        while(!Q.empty()) {
           
        
          
            if(Q.front()->left ) Q.push(Q.front()->left);
            if(Q.front()->right) Q.push(Q.front()->right);
            
           
            temp.push_back(Q.front()->val);
            Q.pop();
            
            if(--count == 0) {
                if(x % 2 ==0) {
                    res.push_back(temp);
                }else{
                    reverse(temp.begin(),temp.end());
                    res.push_back(temp);
                }
                x += 1;
                count = Q.size();
                temp.clear();
            }
        }
        return res;
    }
};
