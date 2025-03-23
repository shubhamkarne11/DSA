class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int first = n*n;
        int i;
        for(i=first;i>=1;i--){
            if(i*w<=maxWeight){
                break;
            }
        }
        return i;
    }
};