class Solution {
public:
    bool isPalindrome(string s) {
        string gg="";
        int cnt=0;
        for(int i=0;i<s.length(); i++){
            if(s[i]>=65 && s[i]<=90){
                char ch=(char)tolower(s[i]);
                gg+=ch;
            }
            else if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
                gg+=s[i];
            }
            else{
                continue;
            }
        }
        int i=0;
        int j=gg.length()-1;
        while(i<j){
            if(gg[i]!=gg[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};