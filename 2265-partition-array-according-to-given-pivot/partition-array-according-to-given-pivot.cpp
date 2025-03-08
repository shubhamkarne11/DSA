class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        vector<int> v4;
        for(int i=0;i<n;i++){
          if(nums[i]>pivot){
             v1.push_back(nums[i]);
               }else if(nums[i]<pivot){
                  v3.push_back(nums[i]);
                    }else{
                        v2.push_back(nums[i]);
                          }
                          }

                          for(auto it:v3){
                           v4.push_back(it);
                           }
                           for(auto it:v2){
                            v4.push_back(it);
                            }
                            for(auto it:v1){
                             v4.push_back(it);
                             }

                             return v4;
    }
};