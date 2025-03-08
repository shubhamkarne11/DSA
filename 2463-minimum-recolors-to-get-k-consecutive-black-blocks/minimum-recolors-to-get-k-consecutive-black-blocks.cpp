class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        //brute force approach
        // int ans = INT_MAX;
        // for(int i=0;i<=n-k;i++){
        //     int w=0;
        //     for(int j=i; j-i+1<=k; j++){
        //         if(blocks[j]=='W'){
        //             w++;
        //         }
        //     }
        //     ans = min(ans, w);
        // }
        // int i=0;
        // int j=0;
        // int ops = k;
        // int w=0;
        // while(j < n){
        //     if(blocks[j]=='W'){
        //         w++;
        //     }

        //     if(j - i + 1 == k){
        //         ops = min(ops, w);

        //         if(blocks[i]=='W'){
        //             w--;
        //         }
        //         i++;
        //     }
        //     j++;
        // }




        int i=0;
        int j=0;
        int w=0;
        int ops = k;
        while(j<n){
            if(blocks[j]=='W'){
                w++;
            }

            if(j-i+1==k){
                ops = min(ops, w);
                if(blocks[i]=='W'){
                    w--;
                }
                i++;
            }
            j++;
        }
        return ops;
    }
};