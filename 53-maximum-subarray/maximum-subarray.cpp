class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //brute better
        // long long maxsum = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     long long sum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         sum +=nums[j];
        //         maxsum = max(maxsum, sum);
        //     }
        // }

        //optimal
        int maxnum = INT_MIN;
        int cursum = 0;
        for(int i=0;i<nums.size();i++){
            cursum += nums[i];
            maxnum=max(maxnum, cursum);
            if(cursum<0){
                cursum=0;
            }
        }





        // int maxnum = INT_MIN;
        // int cursum = 0;
        // for(int sum: nums){
        //     cursum += sum;
        //     maxnum = max(maxnum, cursum);
        //     if(cursum<0){
        //         cursum=0;
        //     }
        // }
        return maxnum;
    }
};