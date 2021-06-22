/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
int maxProfit(vector<int>& prices) {
        vector<int> sol;
        int mi=9999999;
        for(auto i:prices){
            mi=min(mi,i);
            sol.push_back(mi);
        }
        int n=prices.size();
        int ans=0;
        for(int i=n-1;i>=1;i--){
            ans=max(ans,prices[i]-sol[i-1]);
        }
        return ans;
        
    }
