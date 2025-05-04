class Solution {

    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> res;
    
            vector<int> curr;
            recur(nums, 0, curr, res);
    
            return res;
            
        }
    
        void recur(vector<int> & nums, int index, vector<int> curr, vector<vector<int>> &res){
    
            if(index == nums.size()) {
    
                res.push_back(curr);
    
                return;
    
            }
    
            // dont take the number at index
            recur(nums, index + 1, curr, res);
    
            //  take the number at index
            curr.push_back(nums[index]);
    
            recur(nums, index + 1, curr, res);
    
        }
    };