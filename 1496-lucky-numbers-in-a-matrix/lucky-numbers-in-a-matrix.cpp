class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int> v;
        vector<int> ans;
        vector<int> gg;
        int s=0;
        for(int i=0; i<matrix.size(); i++){
             mini=INT_MAX;
            for(int j=0; j<matrix[0].size(); j++){
                    mini=min(mini,matrix[i][j]);
            }
            v.push_back(mini);
        }
          for(int i=0; i<matrix[0].size(); i++){
            maxi=INT_MIN;
            for(int j=0; j<matrix.size(); j++){
                    maxi=max(maxi,matrix[j][i]);
            }
            ans.push_back(maxi);
        }
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<v.size(); j++){
                if(ans[i]==v[j]){
                   gg.push_back(ans[i]);
                }
            }
        }
        return gg;
    }
};