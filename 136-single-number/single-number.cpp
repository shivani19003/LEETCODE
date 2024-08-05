class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int curr=0;
        int ans=0;
        while(curr<nums.size()){
           ans^=nums[curr];
           curr++;
        }
        return ans;
    }
};