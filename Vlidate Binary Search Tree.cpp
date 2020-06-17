// 98. Validate Binary Search Tree
// https://leetcode.com/problems/validate-binary-search-tree/

 vector<int> res;
    void helper(TreeNode* root) {
        if(!root) return;
        helper(root->left);
        res.push_back(root->val);
        helper(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        helper(root);
        for(int i = 0; i < res.size() - 1; i++){
            if(res[i] >= res[i+1]) return false;
        }
        return true;
        
    }
