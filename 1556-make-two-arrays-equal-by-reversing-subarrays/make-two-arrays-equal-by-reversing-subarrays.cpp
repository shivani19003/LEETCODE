class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       map<int,int> mp;
       for(auto i : target){
        mp[i]++;
        
       }
        for(int i=0 ; i< arr.size(); i++){
            if(!mp.count(arr[i])){
                return false;
            }
            else{
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
            }

        }
    return true;
    }
};