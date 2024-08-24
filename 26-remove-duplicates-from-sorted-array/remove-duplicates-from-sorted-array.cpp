class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        // int cnt=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(mp[nums[i]]==0){
        //         break;
        //     }
        //     while(mp[nums[i]]--){
        //         continue;
        //     }
        //     nums[i]=nums[i];
        //     cnt++;
        // }
        nums.clear();
        for(auto i: mp){
            nums.push_back(i.first);
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};