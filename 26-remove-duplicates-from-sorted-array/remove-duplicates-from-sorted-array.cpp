class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=0;
        int cnt=0;
        while(j<nums.size()){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
            j++;
        }
        return i+1;
    }
};