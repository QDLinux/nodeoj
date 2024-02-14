//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct Item {
//    int volume;
//    int value;
//    int count;
//};
//
//int max_value(int n, int m, const vector<Item>& items) {
//    vector<int> dp(m + 1, 0);
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = m; j >= 0; --j) {
//            for (int k = 0; k <= items[i].count; ++k) {
//                if (j >= k * items[i].volume) {
//                    dp[j] = max(dp[j], dp[j - k * items[i].volume] + k * items[i].value);
//                }
//            }
//        }
//    }
//
//    return dp[m-1];
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    for (int i = 0; i < t; ++i) {
//        int n, m;
//        cin >> n >> m;
//
//        vector<Item> items(n);
//        for (int j = 0; j < n; ++j) {
//            cin >> items[j].volume >> items[j].value >> items[j].count;
//        }
//
//        int result = max_value(n, m, items);
//        cout << result << endl;
//    }
//
//    return 0;
//}





#include<iostream>
#include<cstring>
using namespace std;
const int MAX=1005;
int dp[MAX];
int n,m;
void solve()
{
	int v,w,c;
	memset(dp,0,sizeof(dp));
	cin>>n>>m;
	m--;
	for(int i=1;i<=n;i++)
	{
		cin>>v>>w>>c;
		int base =1;
		while(c)
		{
			int totv=base*v;
			int totw=base*w;
			for(int j=m;j>=totv;j--)
			{
				dp[j]=max(dp[j],dp[j-totv]+totw);
			}
			c-=base;
			base*=2;
			if(base>c)
			{
				base=c;
			}
		}
	}
	cout<<dp[m]<<endl;
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
//二进制分解 
//	int c;
//	cin>>c;
//	int base =1;
//	while(c)
//	{
//		cout<<base<<" ";
//		c-=base;
//		base*=2;
//		if(base>c) base=c;
//	}
