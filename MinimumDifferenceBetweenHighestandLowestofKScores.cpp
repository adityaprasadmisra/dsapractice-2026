class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
         int ans=INT_MAX;
         sort(nums.begin(),nums.end());
         int l=0;
         int r=k-1;
         while(r<nums.size())
         {
            ans=min(nums[r]-nums[l],ans);
            l++;
            r++;
         }
         return ans;
    }
};

// step1: fixed sized slinding window problem , kinda a greedy sort+2 pointer easy q
