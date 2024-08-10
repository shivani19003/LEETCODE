class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int , int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        int j=0;
        for(auto i : mp){
            nums[j]=i.first;
            j++;
        }
        return mp.size();
    }
};