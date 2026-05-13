class Solution {
public:
    int countKdivPairs(vector<int>& arr, int k) {

        unordered_map<int,int> mp;

        int count = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            int rem = arr[i] % k;

            int needed = (k - rem) % k;

            count += mp[needed];

            mp[rem]++;
        }

        return count;
    }
};
