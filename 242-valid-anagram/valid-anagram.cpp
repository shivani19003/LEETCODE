class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]){
                mp[s[i]]--;
            }
            else{
                return false;
            }
        }
        for(auto i : mp){
            if(i.second>=1){
                return false;
            }
        }
        return true;
    }
};