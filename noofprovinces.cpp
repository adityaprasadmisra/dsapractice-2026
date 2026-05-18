class Solution {

 private:
   void dfs(vector<vector<int>> adjlist,int node,vector<int> &visited)
   {
    visited[node]=1;
     for(auto it : adjlist[node])
     {
        if(!visited[it])
        {
            dfs(adjlist,it,visited);
        }
     }
   }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
         // adj matrix is given we will change it to adj list
         int n=isConnected.size();
        vector<vector<int>> adjlist(n);
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1&& i!=j)
                {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
         }
      int count=0;
      vector<int> visited(n,0);
      for(int i=0;i<n;i++)
      {
        if(visited[i]==0)
        {
            count++;
            dfs(adjlist,i,visited);
        }
      }
      return count;

        
    }
};
