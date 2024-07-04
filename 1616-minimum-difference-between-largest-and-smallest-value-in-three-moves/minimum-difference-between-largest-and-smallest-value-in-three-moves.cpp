class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int mini=INT_MAX;
        int a= nums[n-1]-nums[3];
        int b= nums[n-2]-nums[2];
        int c= nums[n-3]-nums[1];
        int d= nums[n-4]-nums[0];
        mini=min({a,b,c,d});
        return mini;
    }
};