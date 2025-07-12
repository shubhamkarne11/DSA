class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v1;
        v1=nums;
        v1.insert(v1.end(), nums.begin(), nums.end());
        return v1;
    }
};