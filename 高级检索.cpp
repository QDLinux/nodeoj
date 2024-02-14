#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		int small=lower_bound(a,a+n,x)-a;
		int big=a+n-upper_bound(a,a+n,x);
		cout<<small<<" "<<big<<endl;
	}
	return 0;
 } 
