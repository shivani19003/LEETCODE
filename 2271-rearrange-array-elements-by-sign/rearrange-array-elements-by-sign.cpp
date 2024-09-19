class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else n.push_back(nums[i]);
        }
        int d=0;
        int e=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                nums[i]=p[d];
                d++;
            }
            else{
                nums[i]=n[e];
                e++;
            }
        }
        return nums;
    }
};