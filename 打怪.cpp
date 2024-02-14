#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll a[10005],b[10005];
int cnt=0;
int query(ll x)
{
	ll l=1,r=cnt;
	ll mid;
	ll res=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(b[mid]<=x)
		{
			res=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return res;
}
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
		for(int j=1;j<=n;j++)
		{
			b[++cnt]=a[i]+a[j];
		}
	}
	sort(b+1,b+cnt+1);
	for(int i=1;i<=m;i++)
	{
		ll k,ans=0;
		cin>>k;
		for(int j=1;j<=cnt;j++)
		{
			ans+=query(k-b[j]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
