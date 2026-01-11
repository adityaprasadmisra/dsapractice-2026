//https://leetcode.com/problems/gray-code/description/
#include<bits/stdc++.h>
using namespace std;

void ans(int n)
{
    int size=pow(2,n);
    vector<int> answer;
    for(int i=0;i<size;i++)
    {
        answer.push_back(i^(i>>1));
    }
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<endl;
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    ans(n);
    return 0;
}