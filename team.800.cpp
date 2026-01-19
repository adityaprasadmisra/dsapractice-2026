//https://codeforces.com/problemset/problem/231/A

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> mat(3,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        cin>> mat[0][i] >> mat[1][i] >> mat[2][i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(mat[0][i]+mat[1][i]+mat[2][i]>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;

}