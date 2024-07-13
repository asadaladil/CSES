#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int dp[N];
int target_0(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n<10)
    {
        return 1;
    }
    if(dp[n]!=1e8)
    {
        return dp[n];
    }
    vector<int>A;
    int x=n;
    while(x!=0)
    {
        A.push_back(x%10);
        x/=10;
    }
    sort(A.rbegin(),A.rend());
    for(auto it:A)
    {
        dp[n]=min(dp[n],1+target_0(n-it));
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i]=1e8;
    }
    cout<<target_0(n)<<endl;
}
