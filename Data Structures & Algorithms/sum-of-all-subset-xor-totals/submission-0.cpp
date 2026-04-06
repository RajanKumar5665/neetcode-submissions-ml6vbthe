class Solution {
public:
   void generateSubset(vector<int>& nums, int idx, vector<int>& ans, vector<vector<int>>& result){
       if(idx == nums.size()){
           result.push_back(ans);
           return;
       }

       ans.push_back(nums[idx]);
       generateSubset(nums, idx+1, ans, result);
       ans.pop_back();
       generateSubset(nums, idx+1, ans, result);
   }
    int subsetXORSum(vector<int>& nums) {
         vector<int> ans;
         vector<vector<int>> result;

         generateSubset(nums, 0, ans, result);

         int temp = 0;
         for(vector<int>& subset: result){
                int xor1 = 0;
                for(int& num : subset){
                     xor1 ^= num;
                }
               temp += xor1;
         }

         return temp;
    }
};