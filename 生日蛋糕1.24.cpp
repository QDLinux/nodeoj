#include<iostream>
#include<cstring>
using namespace std;
const int MAX=30;
int dp[30][1005];
int main()
{
	memset(dp,-1,sizeof(dp));
	dp[0][0]=0;
	int k,v,n;
	cin>>k>>v>>n;
	for(int i=1;i<=n;i++)
	{
		int vi,ci;
		cin>>vi>>ci;
		for(int j=k;j>=1;j--)
		{
			for(int l=v;l>=vi;l--)
			{
				if(dp[j-1][l-vi]!=-1)
				{
					dp[j][l]=max(dp[j][l],dp[j-1][l-vi]+ci);
				}
			}
		}
	}
	if(dp[k][v]==-1) cout<<"impossible"<<endl;
	else cout<<dp[k][v]<<endl;
	return 0;
}
