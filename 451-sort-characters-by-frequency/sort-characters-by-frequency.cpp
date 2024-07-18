class Solution {
public:
    string frequencySort(string s) {
        string gg="";
        map<char, int> mp;
        for(auto i: s){
            mp[i]++;
        }
        while(!mp.empty()){
        int maxi=INT_MIN;
            for(auto i : mp){
                maxi=max(maxi, i.second);
            }
            for(auto i : mp){
                if(i.second == maxi){
                    while(i.second--){
                        gg+=i.first;
                    }
                    mp.erase(i.first);
                }
            }
        }
        return gg;
    }
};