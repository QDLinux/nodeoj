#include<iostream>
using namespace std;
const int MAX=1000010;
typedef long long ll;
ll a[MAX],dp[MAX];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		ll mn=i-1;
		for(int j=1;j<=m;j++)
		{
			if(i-j>=0 && dp[i-j]<dp[mn])
			{
				mn=i-j;
			}
		}
		dp[i]=a[i]+dp[mn];
	}
	ll ans=dp[n];
	for(int i=1;i<=m;i++)
	{
		if(n-i+1>=1)
		{
			ans=min(ans,dp[n-i+1]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
