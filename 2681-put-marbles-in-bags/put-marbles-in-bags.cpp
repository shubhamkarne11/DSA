class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        int m = n-1;
        vector<int>putmarbles(m,0);
        for(int i=0;i<m;i++){
            putmarbles[i]=weights[i]+weights[i+1];
        }
        sort(putmarbles.begin(),putmarbles.end());
        long minsum = 0;
        long maxsum = 0;
        for(int i=0;i<k-1;i++){
            minsum+=putmarbles[i];
            maxsum+=putmarbles[m-1-i];
        }
        return maxsum-minsum;

    }
};