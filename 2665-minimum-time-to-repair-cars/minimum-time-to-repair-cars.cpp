class Solution {
public:
    typedef long long ll;
    bool ispossible(vector<int>& ranks , ll mid , int cars){
        ll carsfixed = 0;
        for(int i=0;i<ranks.size();i++){
            carsfixed += sqrt(mid/ranks[i]);
        }
        return carsfixed >= cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
        ll l = 1;
        int maxC = *max_element(ranks.begin(), ranks.end());
        ll r = 1LL * maxC * cars * cars;
        ll result=-1;
        while(l<=r){
            ll mid=l + (r-l)/2;
            if(ispossible(ranks , mid , cars)){
                result=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;
    }
};