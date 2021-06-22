int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int one=0,two=0;
        for(int i=2;i<=n;i++){
            int temp=one;
            one=min(one+cost[i-1],two+cost[i-2]);
            two=temp;
        }
        return one;
        
        
    }
