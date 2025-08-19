class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>l(n);
        vector<int>r(n);
        vector<int>ans(n);
        l[0] = 1;
        for(int i=1;i<n;i++){
            l[i] = nums[i-1] * l[i-1];
        }

        r[n-1]=1;
        for(int i=n-2; i>=0;i--){
            r[i] = nums[i+1] * r[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = l[i]*r[i];
        }

        return ans;
    }
};