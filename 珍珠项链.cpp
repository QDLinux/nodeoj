#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[100005],seq[100005],len[100005];
int cal(int x,int cnt)
{
	int l=1,r=cnt;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(seq[mid]<x)
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	if(seq[ans]==x-1) return ans;
	else return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		int pos=cal(a[i],cnt);
		if(pos==0)
		{
			cnt++;
			seq[cnt]=a[i];
			len[cnt]=1;
		}
		else
		{
			len[pos]++;
			seq[pos]=a[i];
		}
	}
	sort(len+1,len+cnt+1);
	printf("%d\n",len[1]);
	return 0;
}
