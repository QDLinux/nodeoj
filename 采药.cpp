#include<iostream>
using namespace std;
const int N=1e3+5;
int w[N],v[N];
int dp[N][N];
int main()
{
	int m,t;
	cin>>t>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>w[i]>>v[i];
		
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=t;j++)
		{
			if(j<w[i]) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max( dp[i-1][j] , dp[i-1][j-w[i]]+v[i]);
		}
	}
	cout<<dp[m][t]<<endl;
	return 0;
 } 
