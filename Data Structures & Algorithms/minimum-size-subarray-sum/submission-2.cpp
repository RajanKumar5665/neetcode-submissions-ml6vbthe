class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          // int min_length = INT_MAX;
          //  int n = nums.size();
          // for(int i=0; i<n; i++){
          //   int sum = 0;
          //   for(int j=i; j<n; j++){
          //           sum += nums[j];
          //           if(sum >= target){
          //                min_length = min(min_length, j - i + 1);
          //                break;
          //           }
          //   }
          // }

          // return (min_length == INT_MAX)? 0 : min_length;
    //        int j=0;
    //        int min_length = INT_MAX;
    //         int sum = 0;
    //         int n = nums.size();
    //       for(int i=0; i<n; i++){
               
    //           sum += nums[i];

    //           if(sum >= target){
    //               min_length = min(min_length, i - j);
    //               if(j < n){
    //                  j++;
    //               }
    //               i = j;
    //               sum = 0;
    //           }
    //       }
    //    return min_length == INT_MAX ?  0 : min_length;

             int j=0;
            int min_length = INT_MAX;
            int sum = 0;
            int n = nums.size();

            for(int i=0; i<n; i++){
                 sum += nums[i];

                 while(sum >= target){
                    min_length = min(min_length, i - j + 1);
                    sum -= nums[j];
                    j++;
                 }
            }

            return min_length == INT_MAX ?  0 : min_length;
          
    }
};