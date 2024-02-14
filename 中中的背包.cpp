#include<iostream>
using namespace std;
const int MAX=10005;
int dp[MAX];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int v,w,p;
		cin>>v>>w>>p;
		if(p==0)
		{
			for(int j=v;j<=m;j++)
			{
				dp[j]=max(dp[j],dp[j-v]+w);
			}
		}
		else
		{
			int base=1;
			while(p)
			{
				int tv=base*v;
				int tw=base*w;
				for(int j=m;j>=tv;j--)
				{
					dp[j]=max(dp[j],dp[j-tv]+tw);
				}
				p-=base;
				base*=2;
				if(base>p) base=p;
			}
		}
	}
	cout<<dp[m]<<endl;
	return 0;
}
