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
    
