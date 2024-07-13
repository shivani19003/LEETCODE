class Solution {
public:
    string largestOddNumber(string num) {
        string gg="";
        for(int i=num.size()-1; i>=0; i--){
            int r=num[i]-48;
            if(r%2!=0){
                gg=num.substr(0,i+1);
                break;
            }
        }
        return gg;
    }
};
