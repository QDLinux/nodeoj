#include <iostream>
using namespace std;
typedef long long ll;
ll n,m,k;//n个人，m块糖，第k个最多 
ll cal(ll x,ll pe)
{
	ll ans=0;
	if(x<pe)
	{
		ans=((1+x)*x)/2;
		ans+=pe-x;
	}
	else
	{
		ans=((x+(x-pe+1))*pe)/2;
	}
	return ans;
}
bool check(ll x)
{
	ll sum=x;
	sum+=cal(x-1,k-1);
	sum+=cal(x-1,n-k);
	return sum<=m;
}
int main() {
    cin >> n >> m >> k;
    ll l=1,r=m;
    ll ans=1;
    while(l<=r)
    {
    	ll mid=(l+r)/2;
    	if(check(mid))
    	{
    		l=mid+1;
    		ans=mid;
		}
		else r=mid-1;	
	}
	cout<<ans<<endl;
    return 0;
}

