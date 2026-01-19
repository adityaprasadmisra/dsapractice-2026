class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
          int n = costs.size();
        vector<pair<int,int>> pair;
        for(int i = 0; i < n; i++){
            pair.push_back({costs[i], capacity[i]});
        }
        sort(pair.begin(), pair.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(pair[i].first < budget){
                ans = max(ans, pair[i].second);
            }
        }
        int l = 0, r = n - 1;
        while(l < r){
            int sumCost = pair[l].first + pair[r].first;

            if(sumCost < budget){
                int sumCap = pair[l].second + pair[r].second;
                ans = max(ans, sumCap);
                l++;   
            } else {
                r--;   
            }
        }

        return ans;
    }
};
