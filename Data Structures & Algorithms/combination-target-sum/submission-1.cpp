class Solution {
public:
    void solve(vector<int>& nums, int target, int idx, vector<int>& ans, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(ans);
            return;
        }

        if (idx == nums.size() || target < 0) {
            return;
        }

        // include (multiple times allowed)
        ans.push_back(nums[idx]);
        solve(nums, target - nums[idx], idx, ans, result);
        ans.pop_back();

        // exclude
        solve(nums, target, idx + 1, ans, result);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        solve(nums, target, 0, ans, result);
        return result;
    }
};