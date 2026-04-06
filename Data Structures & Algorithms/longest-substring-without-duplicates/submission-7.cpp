class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int max_len = 0;
        int n = s.size();
       for(int i=0; i<n; i++){
    unordered_set<char> st;
    for(int j=i; j<n; j++){
        if(st.count(s[j])) break;
        st.insert(s[j]);
        max_len = max(max_len, j - i + 1);
    }
}
return max_len;
    }
};
