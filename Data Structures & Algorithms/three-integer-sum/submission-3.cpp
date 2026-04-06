class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> ans;
        // set<vector<int>> s;

        // for(int i = 0; i < n; i++) {
        //     for(int j = i + 1; j < n; j++) {
        //         for(int k = j + 1; k < n; k++) {
        //             if(nums[i] + nums[j] + nums[k] == 0) {
        //                 vector<int> triplet = {nums[i], nums[j], nums[k]};
        //                 sort(triplet.begin(), triplet.end()); // Sort to avoid duplicates
        //                 s.insert(triplet);
        //             }
        //         }
        //     }
        // }

        // for(auto& triplet : s){
        //     ans.push_back(triplet);
        // }
        // return ans;

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // skip duplicates
                    while(j < k && nums[j] == nums[j + 1]) j++;
                    while(j < k && nums[k] == nums[k - 1]) k--;

                    j++;
                    k--;
                }
                else if(sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};
