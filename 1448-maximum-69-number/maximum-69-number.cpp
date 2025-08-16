class Solution {
public:
    int maximum69Number (int num) {
        string num1 = to_string(num);
        int ans = num;
        int num2;
        for(int i=0;i<num1.size();i++){
            string change = num1;
            if(change[i]=='6'){
                change[i]='9';
            }
            num2 = stoi(change);
            ans = max(ans,num2);
            change = num1;
        }
        return ans;
    }
};