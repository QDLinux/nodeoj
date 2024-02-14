#include <iostream>
using namespace std;
const int MAXM=30;
const int MAXV=30010;
int dp[MAXM][MAXV];
int v[MAXM],p[MAXM];
int n,m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
	cin>>v[i]>>p[i];p[i]*=v[i];
	}
	for(int i=1;i<=m;i++)
		for(int j=0;j<=n;j++)
			if(j>=v[i])
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+p[i]);else
			dp[i][j]=dp[i-1][j];
	cout<<dp[m][n]<<endl;
	return 0;
}
