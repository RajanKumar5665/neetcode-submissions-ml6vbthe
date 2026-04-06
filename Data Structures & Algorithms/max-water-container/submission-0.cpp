class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        //     int n = heights.size();
        //     int maxWater = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         int width = j - i; 
        //         int height = min(heights[i], heights[j]);
        //         int area = width * height;
        //         maxWater = max(maxWater, area);
        //     }
        // }

        // return maxWater;

        int l = 0;
        int r = heights.size() - 1;

        int max_water = 0;

        while(l < r){
           int  h = min(heights[l], heights[r]);
           int w = r - l;
           int container = h * w;
           max_water = max(max_water, container);
           heights[l] < heights[r] ? l++ : r--;
        }
        return max_water;
    }
};
