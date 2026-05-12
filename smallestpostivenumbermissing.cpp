class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        
        sort(arr.begin(),arr.end());
        queue<int> q;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0) q.push(arr[i]);
            else continue;
        }
        vector<int> ans;
       while(!q.empty())
        {
            int k=q.front();
            ans.push_back(k);
            q.pop();
        }
        int answer=1;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==answer)
            {
            answer++;
            }
        }
        return answer;
        
    }
};
