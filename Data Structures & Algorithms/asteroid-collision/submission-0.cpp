class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;

        for(int i = 0; i < ast.size(); i++) {

            if(ast[i] > 0) {
                st.push(ast[i]);
            }
            else {
                // collision loop
                while(!st.empty() && st.top() > 0 && st.top() < abs(ast[i])) {
                    st.pop();
                }

                if(!st.empty() && st.top() == abs(ast[i])) {
                    st.pop();   // both explode
                }
                else if(st.empty() || st.top() < 0) {
                    st.push(ast[i]);   // current survives
                }
            }
        }

        // stack -> vector
        vector<int> ans(st.size());
        for(int i = ans.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
