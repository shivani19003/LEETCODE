class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int currmin=prices[0];
        for(int i=1; i<=prices.size()-1; i++){
            if(prices[i]<currmin){
                currmin=prices[i];
            }
            maxi=max(maxi,prices[i]-currmin);
        }
        return maxi;
    }
};