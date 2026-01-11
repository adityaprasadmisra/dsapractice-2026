#include<bits/stdc++.h>
using namespace std;
int minAllOneMultiple(int k) {
       string s = "1";
    bool found = false;

    while (!found) {
        int num = stoi(s);          

        if (num % k == 0) {
            return log10(num) + 1; 
        }

        s.push_back('1');           
    }

    return -1;
    }
int main()
{
    int n;
    cin>>n;
    cout<<minAllOneMultiple(n)<<endl;
    return 0;
}
