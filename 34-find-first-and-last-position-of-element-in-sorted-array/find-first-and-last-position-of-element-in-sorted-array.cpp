class Solution {
public:
    int firstpos(vector<int>nums, int target){
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int ans=-1;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid]==target){
                right = mid-1;
                ans=mid;
            }else if(nums[mid]>target){
                right = mid-1;
            }else if(nums[mid]<target){
                left=mid+1;
            }
        }
        return ans;
    }
    int lastpos(vector<int>nums, int target){
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int ans=-1;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid]==target){
                left = mid+1;
                ans=mid;
            }else if(nums[mid]>target){
                right =  mid-1;
            }else if(nums[mid]<target){
                left=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n1=firstpos(nums,target);
        int n2=lastpos(nums,target);
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
    }
};