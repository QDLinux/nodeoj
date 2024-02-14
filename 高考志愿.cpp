#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100005];
int main()
{
	int n,m;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+m);
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x<=a[0])
		{
			ans+=a[0]-x;
		}
		else
		{
			int small=lower_bound(a,a+m,x)-a;
			//int big=a+n-upper_bound(a,a+n,b[i]);
			ans+=min( abs(x-a[small-1]) , abs(x-a[small]) );
		}
		
	}
	cout<<ans<<endl;
	return 0;
 } 
