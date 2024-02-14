#include<iostream>
using namespace std;
const int MAX=20;
long long a[MAX];
long long b[MAX];
int mod=10007;
int main()
{
	a[1]=1;
	b[1]=8;
	for(int i=2;i<=15;i++)
	{
		a[i]=b[i-1]+9*a[i-1];
		b[i]=a[i-1]+9*b[i-1];
	}
	b[1]=9;
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<" "<<b[n]<<endl;;
	}
	return 0;
} 
