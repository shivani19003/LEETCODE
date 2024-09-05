class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string gg="";
        for(int i=0; i<strs[0].length(); i++){
            char ch=strs[0][i];
            for(int j=0; j<strs.size();j++){
                if(strs[j][i]!=ch){
                   gg=strs[0].substr(0,i);
                   return gg;
                }
            }
        }
        return strs[0];
    }
};
