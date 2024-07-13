class Solution {
public:
    bool rotateString(string s, string goal) {
        string gg="";
        string word="";
        string st= "";
        for(int i=s.length()-1; i>=0; i--){
            gg=s.substr(i);
            word=s.substr(0,i);
            st=gg+word;
            if(st==goal){
                return true;
            }
            gg="";
            word="";
            st="";
        }
        return false;
    }
};