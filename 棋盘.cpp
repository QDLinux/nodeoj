#include<iostream>
#include<algorithm>
using namespace std;
int ans[200010];
bool w[200],w2[400],w3[400];
int n;
int num=0;
void dfs(int x)
{
	if(x==n+1)
	{
		num++;
		if(num<=3)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<ans[i]<<' ';
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(w[i]==0 && w2[i+x]==0 && w3[x-i+n]==0)
		{
			w[i]=w2[i+x]=w3[x-i+n]=1;
			ans[x]=i;
			dfs(x+1);
			w[i]=w2[x+i]=w3[x-i+n]=0;
		}
	}
}
int main()
{
    while(cin>>n)
    {
    	num=0;
    	dfs(1);
    	cout<<num<<endl;
	}   
    return 0;
}
