class Solution {
public:
    bool candistribute(vector<int> &candies, int mid, long long k){ 
        int n = candies.size();
        for(int i=0;i<n;i++){
            k -= candies[i]/mid; 
            if(k<=0){
              return true;
            }
        }
        
        return k<=0;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        long long total = 0;
        for(int i=0;i<n;i++){
            total += candies[i];
        }
        if(total<k){
            return 0;
        }
        int l = 1;
        int r = *max_element(candies.begin(),candies.end());;
        int ans = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(candistribute(candies, mid, k)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
    }
};