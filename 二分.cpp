#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
const int N=2e5+5;
int b[N];
long long hx(ll h,const vector<int> &a,int n)
{
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]<h)
		{
			sum+=(h-b[i]);
		}
	}
	return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		ll l=1;
		ll r=3e9;
		ll ans;
		while(l<=r)
		{
			ll m=(l+r)/2;
			ll res=hx(m,a,n);
			if( res <= x ) 
			{
				ans=m;
				l=m+1;
			}
			else r=m-1;
		}
		cout<<ans<<endl;
	}
	return 0;
 } 
