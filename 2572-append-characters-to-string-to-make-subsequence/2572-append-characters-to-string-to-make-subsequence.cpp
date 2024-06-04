class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0;
        int st=s.length(), nt=t.length();
        for(int i=0; i<st && j<nt; i++){
            if(s[i]==t[j]){
                j++;
            }
        }
        return nt-j;
    }
};