class Solution {
public:
   set<vector<int>> st;
    void getAllCombination(vector<int>& nums, int tar, int idx, vector<int>& ans, vector<vector<int>>& result){
         if (tar == 0) {
        if (st.find(ans) == st.end()) {
        result.push_back(ans);
        st.insert(ans);
        }
       return;
         }

           if (idx == nums.size() || tar < 0) {
                return;
}
            ans.push_back(nums[idx]);
            //single choice
            getAllCombination(nums, tar - nums[idx], idx + 1, ans, result);
           //multiple choice
           getAllCombination(nums, tar - nums[idx], idx, ans, result);
           ans.pop_back();

           //exclusion
           getAllCombination(nums, tar, idx + 1, ans, result);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
          vector<vector<int>> result;
          vector<int> ans;

          getAllCombination(nums, target, 0, ans, result);

          return result;
    }
};
