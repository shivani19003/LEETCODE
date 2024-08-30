class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int>neg;
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]>0){
                posi.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int i=0; 
        int j=0;
        int num=0;
        while(num<nums.size()){
            if(num%2==0){
                ans.push_back(posi[i]);
                i++;
            }
            else{
                ans.push_back(neg[j]);
                j++;
            }
            num++;
        }
        return ans;
    }
};

// [3, 1, 2]
// [-2, -2, -4]