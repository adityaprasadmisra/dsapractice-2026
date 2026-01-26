class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            int p = arr[i] - arr[i - 1];
            if (p < diff) diff = p;
        }
        vector<vector<int>> ans;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == diff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        return ans;
    }
};


// 3 step process sort , then in one scan find the minimum diff possible in the next step in another scan find the pairs and make the ans
