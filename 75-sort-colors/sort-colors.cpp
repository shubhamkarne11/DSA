class Solution {
public:
    void sortColors(vector<int>& nums) {
        //brute approach
        // sort(nums.begin(),nums.end());

        //better approach
        // int count0=0,count1=0,count2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)count0++;
        //     if(nums[i]==1)count1++;
        //     if(nums[i]==2)count2++;
        // }
        // for(int i=0;i<count0;i++){
        //     nums[i]=0;
        // }
        // for(int i=count0;i<count0+count1;i++){
        //     nums[i]=1;
        // }
        // for(int i=count0+count1;i<nums.size();i++){
        //     nums[i]=2;
        // }



        //optimal approach
        //dutch national flag algorithm
        //if mid=0 swap mid,low and increment both
        //if mid=1 increment mid
        //if mid=2 swap mid,high. decrement high
        // int n=nums.size();
        // int low=0;
        // int mid=0;
        // int high=n-1;
        // while(mid<=high){
        //     if(nums[mid]==0){
        //         swap(nums[low],nums[mid]);
        //         low++;
        //         mid++;
        //     }else if(nums[mid]==1){
        //         mid++;
        //     }else{
        //         swap(nums[mid],nums[high]);
        //         high--;
        //     }
        // }




        //better approach
        int count0=0 , count1=0 , count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }else if(nums[i]==1){
                count1++;
            }else{
                count2++;
            }
        }

        for(int i=0;i<count0;i++){
            nums[i]=0;
        }
        for(int i=count0;i<count0+count1;i++){
            nums[i]=1;
        }
        for(int i=count0+count1;i<nums.size();i++){
            nums[i]=2;
        }

    }
};