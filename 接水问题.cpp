#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//int calculateTime(const std::vector<int>& waterRequirements, int m) {
//    int n = waterRequirements.size();
//    std::queue<int> studentQueue;
//    std::vector<int> timeRemaining(m, 0); // 记录每个龙头的剩余时间
//
//    int currentTime = 0;
//    int studentsFinished = 0;
//
//    while (studentsFinished < n || !studentQueue.empty()) {
//        // 将未完成接水的同学加入队列
//        while (studentsFinished < n && studentQueue.size() < m) {
//            studentQueue.push(waterRequirements[studentsFinished++]);
//        }
//
//        // 遍历龙头，减少剩余时间
//        for (int i = 0; i < m; ++i) {
//            if (!studentQueue.empty()) {
//                int currentStudent = studentQueue.front();
//                if (timeRemaining[i] == 0) {
//                    // 该同学接水完成
//                    studentQueue.pop();
//                } else {
//                    // 减少剩余时间
//                    timeRemaining[i]--;
//                }
//
//                if (timeRemaining[i] == 0 && !studentQueue.empty()) {
//                    // 将下一名同学的接水量赋给龙头
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
//    std::cout << "请输入同学数量n和龙头数量m: ";
//    std::cin >> n >> m;
//
//    std::vector<int> waterRequirements(n);
//    std::cout << "请输入每个同学的接水量：";
//    for (int i = 0; i < n; ++i) {
//        std::cin >> waterRequirements[i];
//    }
//
//    int totalTime = calculateTime(waterRequirements, m);
//    std::cout << "所有同学都接完水需要的时间为：" << totalTime << " 秒" << std::endl;
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
