class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          unordered_map<int, int> mpp;
         int ans = 0;
          for(int val : nums){
               mpp[val]++;
          }

          for(auto it : mpp){
             if(it.second > 1){
                  ans = it.first;
             }
          }

           return ans;
    }
};
