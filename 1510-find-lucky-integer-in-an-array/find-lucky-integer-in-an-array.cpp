class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count=0;
        int count2=-1;
        unordered_map<int , int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        //now mpp is [2:2 , 3:1 , 4:1];
        for(auto i : mpp){
            if(i.first==i.second){
                count++;
                count2=max(count2, i.first);
            }
        }
        return count2;
    }
};