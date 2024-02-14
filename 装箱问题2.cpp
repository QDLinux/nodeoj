#include <iostream>
#include <vector>
#include <climits>
using namespace std;
const int qaz=20005;
int dp[qaz];
int v,n,p;
int main() {
    cin >> v >> n;
    for (int i = 1; i <= n; i++) 
	{
        cin >> p;
        for(int j=p;j<=v;j++)
        {
        	dp[j]=max(dp[j],dp[j-p]+p);
		}
    }
	cout<<v-dp[v]<<endl;
    return 0;
}

