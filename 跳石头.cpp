#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int L, N, M; 
int a[50005];
bool check(int q)
{
	int beg=0,stone=0;
	for(int i=1;i<=N;i++)
	{
		if(a[i]-beg >= q)
		{
			beg=a[i];
		}
		else
		{
			stone++;
		}
	}
	if(stone>M) return false;
	else return true;
}
int main()
{
	cin>>L>>N>>M;
	for(int i=1;i<=N;i++)
	{
		cin>>a[i];
	}
	N++;
	a[N]=L;
	int l=1,r=L;
	int ans=L;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
 } 
