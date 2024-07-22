class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> sortpeople;
        for(int i=0 ; i< names.size() ; i++){
            sortpeople.emplace_back(heights[i], names[i]);
        }
        sort(sortpeople.begin(), sortpeople.end(), greater<pair<int,string>>());
        vector<string> gg;
        for(auto i: sortpeople){
            gg.push_back(i.second);
        }
        return gg;
    }
};