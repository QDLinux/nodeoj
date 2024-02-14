#include<iostream>
using namespace std;
const int MAX=30;
int a[MAX][MAX],dp[MAX][MAX];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
			
		}
	}
	cout<<dp[1][1]<<endl;
	return 0;
} 
