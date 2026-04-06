class Solution {
public:
    void genrateSubset(vector<int>& nums, int idx, vector<int>& ans, vector<vector<int>>& result){
           if(idx == nums.size()){
              result.push_back(ans);
              return;
           }
            ans.push_back(nums[idx]);
            genrateSubset(nums, idx + 1, ans, result);
            ans.pop_back();
            genrateSubset(nums, idx + 1, ans, result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> ans;
            vector<vector<int>> result;

           genrateSubset(nums, 0, ans, result);
     

     return result;
        
    }
};
