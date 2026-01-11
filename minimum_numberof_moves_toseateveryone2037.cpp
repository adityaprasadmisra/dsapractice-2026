//https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int ans(vector<int>&seats,vector<int>&students)
{
    sort(seats.begin(),seats.end());
    sort(students.begin(),students.end());
    int answer=0;
    for(int i=0;i<seats.size();i++){
        answer+=abs(seats[i]-students[i]);

    }
    return answer;
}


int main()
{
    int n;
    cin>>n;
    vector<int> seats(n);
    vector<int> students(n);
    for(int i=0;i<n;i++)
    {
        cin>>seats[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>students[i];
    }
    cout << ans(seats,students) <<endl;
    return 0;
}