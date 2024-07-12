class Solution {
public:
    void reverseString(vector<char>& s) {
       string gg="";
       for(int i=s.size()-1; i>=0; i--){
        char ch=s[i];
        gg+=ch;
       }
       vector<char> v;
       for(int i=0; i<gg.size(); i++){
            v.push_back(gg[i]);
       }
       for(int i=0; i<v.size(); i++){
        s[i]=v[i];
       }
    }
};