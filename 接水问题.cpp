#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//int calculateTime(const std::vector<int>& waterRequirements, int m) {
//    int n = waterRequirements.size();
//    std::queue<int> studentQueue;
//    std::vector<int> timeRemaining(m, 0); // ��¼ÿ����ͷ��ʣ��ʱ��
//
//    int currentTime = 0;
//    int studentsFinished = 0;
//
//    while (studentsFinished < n || !studentQueue.empty()) {
//        // ��δ��ɽ�ˮ��ͬѧ�������
//        while (studentsFinished < n && studentQueue.size() < m) {
//            studentQueue.push(waterRequirements[studentsFinished++]);
//        }
//
//        // ������ͷ������ʣ��ʱ��
//        for (int i = 0; i < m; ++i) {
//            if (!studentQueue.empty()) {
//                int currentStudent = studentQueue.front();
//                if (timeRemaining[i] == 0) {
//                    // ��ͬѧ��ˮ���
//                    studentQueue.pop();
//                } else {
//                    // ����ʣ��ʱ��
//                    timeRemaining[i]--;
//                }
//
//                if (timeRemaining[i] == 0 && !studentQueue.empty()) {
//                    // ����һ��ͬѧ�Ľ�ˮ��������ͷ
//                    timeRemaining[i] = studentQueue.front();
//                    studentQueue.pop();
//                }
//            }
//        }
//
//        currentTime++;
//    }
//
//    return currentTime;
//}
//
//int main() {
//    int n, m;
//    std::cout << "������ͬѧ����n����ͷ����m: ";
//    std::cin >> n >> m;
//
//    std::vector<int> waterRequirements(n);
//    std::cout << "������ÿ��ͬѧ�Ľ�ˮ����";
//    for (int i = 0; i < n; ++i) {
//        std::cin >> waterRequirements[i];
//    }
//
//    int totalTime = calculateTime(waterRequirements, m);
//    std::cout << "����ͬѧ������ˮ��Ҫ��ʱ��Ϊ��" << totalTime << " ��" << std::endl;
//
//    return 0;
//}



struct node
{
	int number;
	friend bool operator < (const node &x,const node &y)
	{
		return x.number>y.number;
	}
 } ;
int main()
{
	int n,m;
	cin>>n>>m;
	priority_queue<int,vector<int>,greater<int> > pq;
	priority_queue<node> pq2;
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		if(pq.size()<m) pq.push(t);
		else
		{
			int st=pq.top();
			st+=t;
			pq.pop();
			pq.push(st);
		}
	}
	int ans=0;
	while(!pq.empty())
	{
		ans=pq.top();
		pq.pop();
	}
	cout<<ans<<endl;
	return 0;
}
