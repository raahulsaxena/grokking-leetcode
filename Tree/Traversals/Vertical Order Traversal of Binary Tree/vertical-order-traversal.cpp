class Solution {
    public:
        vector<vector<int>> verticalTraversal(TreeNode* root) {
    
            map<TreeNode*, tuple<int, int, int>> mp;
    
            vector<vector<int>> res;
    
            queue<TreeNode*> q;
    
            q.push(root);
    
            mp[root] = {0, 0, root->val};
    
            int row = 1, col = 0;
    
            while (!q.empty()) {
    
                int q_size = q.size();
    
                for (int i = 0; i < q_size; i++) {
    
                    TreeNode* curr_node = q.front();
                    int col = get<1>(mp[curr_node]);
    
                    q.pop();
    
                    if (curr_node->left != NULL) {
    
                        q.push(curr_node->left);
                        mp[curr_node->left] = {row, col - 1, curr_node->left->val};
                    }
    
                    if (curr_node->right != NULL) {
    
                        q.push(curr_node->right);
                        mp[curr_node->right] = {row, col + 1,
                                                curr_node->right->val};
                    }
                }
    
                row++;
            }
    
            // for(auto [key, value]: mp){
            //     cout << key->val << " " << get<0>(value) << "," << get<1>(value)
            //     << endl;
            // }
    
            map<int, multiset<pair<int, int>>> t;
    
            for (auto [key, value] : mp) {
                t[get<1>(value)].insert({get<0>(value), key->val});
            }
    
            for (auto [k, v] : t) {
                vector<int> l;
                for (auto [col, val] : v) {
                    l.push_back(val);
                }
                res.push_back(l);
            }
    
            return res;
        }
    };