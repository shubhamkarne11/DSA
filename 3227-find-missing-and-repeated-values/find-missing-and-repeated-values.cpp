class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
            int size = n * n;
                vector<int> nums1;
                    unordered_map<int, int> freqmap;
                        
                            int duplicate = -1, missing = -1;
                                for (int i = 0; i < n; i++) {
                                        for (int j = 0; j < n; j++) {
                                                    freqmap[grid[i][j]]++;
                                                            }
                                                                }
                                                                    for (int i = 1; i <= size; i++) {
                                                                            if (freqmap[i] == 2) duplicate = i;
                                                                                    if (freqmap[i] == 0) missing = i;
                                                                                        }

                                                                                            return {duplicate, missing};
    }
};