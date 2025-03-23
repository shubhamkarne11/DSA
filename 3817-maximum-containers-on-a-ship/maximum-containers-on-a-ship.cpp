class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int first = n*n;
        int i=first;
        while(i>=1){
           if (i * w <= maxWeight) {
                break;  // Stop when condition is met
            } else {
                i--;    // Decrement i if condition is not met
            }
        }
        // for(i=first;i>=1;i--){
        //     if(i*w<=maxWeight){
        //         break;
        //     }
        // }
        return i;
    }
};