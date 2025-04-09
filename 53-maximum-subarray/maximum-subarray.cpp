class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxp = INT_MIN;
        int cursum = 0;
        for(auto i : nums){
            if(cursum<0){
                cursum = 0;
            }
            cursum+=i;
            maxp = max(maxp, cursum);
        }
        return maxp;
    }
};