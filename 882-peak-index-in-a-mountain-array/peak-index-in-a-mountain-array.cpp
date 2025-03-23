class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = 0 , k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>n){
                n=arr[i];
                k = i;
            }
        }
        return k;
    }
};