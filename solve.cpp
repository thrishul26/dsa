#include<bits/stdc++.h>
using namespace std;


// A recursive problem converted into DP solution.
int f(int n)
{
    if(n<=1)
    {
        return n;
    }
    vector<int> dp(n+1,-1);

    // Checking DP condition of memoization
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    // Memoization Step to reduce time.
    dp[n]=f(n-1)+f(n-2);
    return f(n-1)+f(n-2);

}


int main()
{
    int n;
    cin>>n;
    int ans = f(n);
    cout<<ans<<"\n";
}
