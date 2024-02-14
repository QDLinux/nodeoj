#include<iostream>
using namespace std;
const int MAX=1e6+10;
unsigned long long f[MAX];

int main()
{
	int n;
	cin>>n;
	f[0]=1;
	f[1]=2;
	for(int i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n]<<endl;
	return 0;
} 
