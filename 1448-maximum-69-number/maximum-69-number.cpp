class Solution {
public:
    int maximum69Number (int num) {
        string num1 = to_string(num);
        for(int i=0;i<num1.size();i++){
            if(num1[i]=='6'){
                num1[i]='9';
                break;
            }
        }
        return stoi(num1);
    }
};