class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0 ;i< nums.size() ; i++){
            ans[i]=nums[i];
        }
        int gg=0 ,i=0;
        int n=ans.size();
        sort(ans.begin(), ans.end());
        while(i<n){
            gg=ans[0];
            for(int j=0 ; j<ans.size()-1; j++){
                ans[j]=ans[j+1];
            }
            ans[n-1]=gg;
            int flag=1;
            for(int k=0 ; k<n; k++){
                if(ans[k]!=nums[k]){
                    flag=0;
                }
            }
            if(flag==1) return true;
            i++; 
        }
        return false;
    }
};