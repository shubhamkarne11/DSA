class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n = nums1.size();
        int m = nums1[0].size();
        vector<vector<int>>n1;
        map<int ,int>mp;
        for(auto p:nums1){
            mp[p[0]]+=p[1];
        }
        for(auto p:nums2){
            mp[p[0]]+=p[1];
        }

        for(auto p:mp){
            n1.push_back({p.first, p.second});
        }

        return n1;
        
    }
};