class Solution {
    private:
    void dfs(vector<vector<int>>& adj,int node,vector<int>&ans,vector<int>&visited)
    {
        visited[node]=1;
        ans.push_back(node);
        for(auto it:adj[node])
        {
            if(!visited[it])
            {
                dfs(adj,it,ans,visited);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans;
        
        int n= adj.size();
        vector<int> visited(n,0);
        dfs(adj,0,ans,visited);
        return ans;
    }
};
