#include<bits/stdc++.h>
using namespace std;
int lcs(vector<string>a,vector<string> b,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0)dp[i][j]=0;
            else {
                if(a[i-1]==b[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                    else
                        dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[n][m];

}
int main()
{
    int n,m;
    while(cin>>n){
    vector<string> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;vector<string> b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    int ans=lcs(a,b,n,m);
    float f=100.0*ans;f/=n;ans=round(f);
    printf("%d%\n",ans);

    }
}
