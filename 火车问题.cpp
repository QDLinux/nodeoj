#include <iostream>
#include <stack>
#include <vector>
using namespace std; 
vector<int> trainOrder(1005);
int n;
bool can() 
{
    stack<int> stationC;
    int expectedNext = 1; // 下一辆期望从B线驶出的火车编号

    //for (int train : trainOrder) 
    for(int i=0;i<n;i++)
	{
        // 从A线驶入，模拟在C线停留
        while (!stationC.empty() && stationC.top() == expectedNext) {
            stationC.pop();
            expectedNext++;
        }

        // 直接从A线驶入C线
        if (trainOrder[i] == expectedNext) expectedNext++; 
		else stationC.push(trainOrder[i]);
    }

    // 处理剩余在C线的火车
    while (!stationC.empty() && stationC.top() == expectedNext) {
        stationC.pop();
        expectedNext++;
    }

    // 如果所有火车都能按照编号顺序从B线驶出，则返回true
    return stationC.empty();
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
	{
        cin >> trainOrder[i];
    }

    if (can()) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

