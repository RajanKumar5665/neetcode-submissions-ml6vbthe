class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {
            bool found = false;

            for(int j = i + 1; j < n; j++) {
                if(temp[j] > temp[i]) {
                    ans[i] = j - i;   // distance store karo
                    found = true;
                    break;
                }
            }

            // agar future me koi warmer day nahi mila
            if(!found) {
                ans[i] = 0;
            }
        }

        return ans;
    }
};
