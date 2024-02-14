#include <iostream>
#include <stack>
#include <vector>
using namespace std; 
vector<int> trainOrder(1005);
int n;
bool can() 
{
    stack<int> stationC;
    int expectedNext = 1; // ��һ��������B��ʻ���Ļ𳵱��

    //for (int train : trainOrder) 
    for(int i=0;i<n;i++)
	{
        // ��A��ʻ�룬ģ����C��ͣ��
        while (!stationC.empty() && stationC.top() == expectedNext) {
            stationC.pop();
            expectedNext++;
        }

        // ֱ�Ӵ�A��ʻ��C��
        if (trainOrder[i] == expectedNext) expectedNext++; 
		else stationC.push(trainOrder[i]);
    }

    // ����ʣ����C�ߵĻ�
    while (!stationC.empty() && stationC.top() == expectedNext) {
        stationC.pop();
        expectedNext++;
    }

    // ������л𳵶��ܰ��ձ��˳���B��ʻ�����򷵻�true
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

