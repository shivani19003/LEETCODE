class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       vector<vector<int>> ans;
        for(int i=0; i<matrix[0].size(); i++){
            vector<int> def;
            for(int j=0; j<matrix.size();j++){
                def.push_back(matrix[j][i]);
            }
            ans.push_back(def);
        }
        return ans;
    }
};
// 5 6              5 8 6                     
// 8 7              6 7 7 
// 6 7 


// [[ 5 6] [ 8 7 ] [6 7] ]  
 //[[5 8]]