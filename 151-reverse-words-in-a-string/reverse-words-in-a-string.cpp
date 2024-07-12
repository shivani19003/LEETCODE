class Solution {
public:
    string reverseWords(string s) {
        string rev;
        string gg;
        string word;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                char ch= s[i];
                gg+=ch;
            }
            else{
                if(!gg.empty()){
                    word=gg+word;
                    word=' '+word;
                    gg="";
                }
                else{
                    continue;
                }
            }
        }
            word=gg+word;
            string v;
            if(word[0]==' '){
        for(int i=1; i<word.size(); i++){
           v+=word[i];
        }  
            }
            else{
                return word;
            }
        return v;
    }
};