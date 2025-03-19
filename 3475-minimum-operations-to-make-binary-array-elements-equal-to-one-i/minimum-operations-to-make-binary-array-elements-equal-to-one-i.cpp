class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ops = 0;
        for(int i=0;i<n-2;i++){
            if(nums[i]==0){
                for (int j = i; j < i + 3; j++) {
                    nums[j] = 1 - nums[j]; 
                }
                ops++;
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]==0) return -1;
        }
        return ops;
    }
};