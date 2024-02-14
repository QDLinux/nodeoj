#include<iostream>
using namespace std;
const int MAX=10010;
int f[MAX];
int a[MAX];
int mod=10007;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x;
		cin>>x;
		a[x]=1;
	}
	
	if(a[1]==0) f[1]=1;	
	if(a[2]==0) f[2]=f[1];
	if(a[3]==0) f[3]=f[1]+f[2];
	
	for(int i=4;i<=n;i++)
	{
		if(a[i]==0) 
		{
			f[i]=(f[i-1]+f[i-2]+f[i-3])%mod;
		}
	}
	cout<<f[n]<<endl;
	return 0;
} 
