class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end() ,0);
        int lefttotal = 0;
        for(int i=0;i<nums.size();i++){
            int rightTotal = total - lefttotal - nums[i];
            if(rightTotal==lefttotal){
                return i;
            }
            lefttotal+=nums[i];
        }
        return -1;
    }
};