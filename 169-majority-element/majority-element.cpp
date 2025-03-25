class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int>mpp;
        int n = nums.size();
        for(auto i : nums){
            mpp[i]+=1;
        }

        for(auto i : mpp){
            if(i.second>n/2){
                return i.first;
            }
        }
        return -1;
    }
};