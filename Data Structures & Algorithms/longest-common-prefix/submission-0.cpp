class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          sort(strs.begin(), strs.end());
          
          string first = strs[0];
          string second = strs[strs.size() - 1];

          string ans = "";

          for(int i=0; i < max(first.size(), second.size()); i++){
                if(first[i] != second[i]){
                      return ans;
                }else{
                    ans += first[i];
                }
          }

          return ans;
    }
};