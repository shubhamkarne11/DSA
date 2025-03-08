class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //day-1
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }

        int p=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[p]=nums[i];
                p++;
            }
        }

        for(int i=p;i<n;i++){
            nums[i]=0;
        }
        return nums;

    }
};