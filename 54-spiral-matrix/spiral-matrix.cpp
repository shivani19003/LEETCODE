class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row= matrix.size();
        int col=matrix[0].size();
        int rows=0;
        int cols=0;
        int lastcol=col-1;
        int lastrow=row-1;
        int cnt=0;
        int total = row*col;
        while(cnt<total){
            for(int i=cols; i<=lastcol; i++){
                ans.push_back(matrix[rows][i]);
                cnt++;
            }
            if(!(cnt<total)) break;
            rows++;
            for(int i=rows; i<=lastrow; i++){
                ans.push_back(matrix[i][lastcol]);
                cnt++;
            }
            if(!(cnt<total)) break;
            lastcol--;
            for(int i=lastcol; i>=cols; i--){
                 ans.push_back(matrix[lastrow][i]);
                 cnt++;
            }
            if(!(cnt<total)) break;
            lastrow--;
            for(int i=lastrow; i>=rows; i--){
                ans.push_back(matrix[i][cols]);
                cnt++;
            }
            if(!(cnt<total)) break;
            cols++;
        }
        return ans;
    }
};