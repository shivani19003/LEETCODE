class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int , int> mp;
       for(auto i: nums){
        mp[i]++;
       }
       int maxi=INT_MIN;
       for(auto i: mp){
            if(i.second>maxi){
                maxi=i.second;
            }
       }
       for(auto i : mp){
        if(mp[i.first]==maxi){
            return i.first;
        }
      
       }
       return 0;
       
   
    }
};