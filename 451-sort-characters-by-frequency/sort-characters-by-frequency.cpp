class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        string gg="";
        while(!mp.empty()){
        int maxi=INT_MIN;
        for(auto i : mp){
            maxi=max(maxi, i.second);
        }
        for(auto i: mp){
            if(i.second==maxi){
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