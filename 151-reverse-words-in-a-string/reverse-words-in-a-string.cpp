class Solution {
public:
    string reverseWords(string s) {
        string gg="";
        string rev="";
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!=' '){
                char ch=s[i];
                gg+=ch;
            }
            if(s[i]==' '){
                if(!gg.empty()){
                    reverse(gg.begin(), gg.end());
                    rev=rev+gg+' ';
                    gg="";
                }
                else{
                    continue;
                }

            }
        }
        reverse(gg.begin(), gg.end());
        rev=rev+gg;
        if(rev[rev.length()-1]==' ') rev.pop_back();
        return rev;
    }
};
