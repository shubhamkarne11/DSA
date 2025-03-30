class Solution {
public:
    int firstelement(vector<int>nums, int target){
        int l = 0;
        int r = nums.size()-1;
        int ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                ans = mid;
                r = mid - 1;
            }else if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }
        }
        return ans;
    }


    int lastelement(vector<int>nums, int target){
        int l = 0;
        int r = nums.size()-1;
        int ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                ans = mid;
                l = mid + 1;
            }else if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstelement(nums, target);
        int last = lastelement(nums, target);
        return {first , last};
    }
};