class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int oldindex = -1;
        int newindex = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                oldindex = i;
                break;
            }
        }

        if(oldindex == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i=nums.size()-1;i>oldindex;i--){
            if(nums[i]>nums[oldindex]){
                newindex = i;
                break;
            }
        }

        swap(nums[oldindex], nums[newindex]);
        reverse(nums.begin() + oldindex + 1, nums.end());
    }
};