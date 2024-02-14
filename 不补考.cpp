#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
typedef long long ll;
const int MAX=100005;
int a[MAX],c[MAX];
int visit[MAX],cnt[MAX];
int n,m;

int check(int x)
{
	memset(visit,0,sizeof(visit));
	memset(cnt,0,sizeof(cnt));
	queue<int> q;
	int tot=0;
	visit[0]=1;
	for(int i=x;i>=1;i--)
	{
		if(visit[a[i]] == 0)
		{
			visit[a[i]]=1;
			if(c[a[i]] == 0)
			{
				tot++;
			}
			else
			{
				q.push(a[i]);
			}
		}
		else
		{
			if(!q.empty())
			{
				int f=q.front();
				cnt[f]++;
				if(cnt[f]==c[f])
				{
					tot++;
					q.pop();
				}
			}
		}
	}
	return tot==m;
}
int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	for(int i=1;i<=m;i++)
    {
    	cin>>c[i];
	}
    int l=1,r=n;
    int ans=-1;
    while(l<=r)
    {
    	int mid=(l+r)/2;
    	if(check(mid))
    	{
    		r=mid-1;
    		ans=mid;
		}
		else l=mid+1;	
	}
	if(ans==-1)
	{
		cout<<"Impossible"<<endl;
	}
	else cout<<ans<<endl;
    return 0;
}

