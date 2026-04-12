class Solution {
public:
 vector<vector<int>> result;
   void solve(int start, int& n, int k, vector<int>& ans) {
          if(k == 0){
              result.push_back(ans);
              return;
          }

          if(start > n) return;

          ans.push_back(start);

          solve(start + 1, n, k - 1, ans);

          ans.pop_back();

          solve(start+1, n, k, ans);
   }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;

       solve(1, n, k, temp);

       return result;
    }
};