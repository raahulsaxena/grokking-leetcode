class Solution {
    public:
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
    
            return dfs(root).second;
    
        }
    
        pair<int, TreeNode*> dfs(TreeNode* root) {
    
            if(root == NULL) return {0, nullptr};
    
            pair<int, TreeNode*> l = dfs(root->left);
    
            pair<int, TreeNode*> r = dfs(root->right);
    
            if(l.first > r.first) return {l.first + 1, l.second}; // lca will be l if l has the deeper subtree
    
            if(l.first < r.first) return {r.first + 1, r.second};
    
            // if the height of both left and right subtree is same, lca of deepest leaves will be the root node
    
            return {l.first + 1, root};
    
    
        }
    };