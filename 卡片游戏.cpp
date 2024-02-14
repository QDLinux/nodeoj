//#include <iostream>
//#include <list>
//
//void josephus_problem(int n) {
//    std::list<int> cards;
//    
//    // ��ʼ����
//    for (int i = 1; i <= n; ++i) {
//        cards.push_back(i);
//    }
//
//    while (!cards.empty()) {
//        // �ӵ���һ����
//        int discarded_card = cards.front();
//        cards.pop_front();
//        std::cout << "�ӵ���: " << discarded_card << std::endl;
//
//        // ���µĵ�һ���Ʒŵ����
//        if (!cards.empty()) {
//            int new_first_card = cards.front();
//            cards.pop_front();
//            cards.push_back(new_first_card);
//        }
//    }
//}
//
//int main() {
//    int n;
//    std::cout << "�������Ƶ�����n: ";
//    std::cin >> n;
//
//    josephus_problem(n);
//
//    return 0;
//}













//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//	vector<int> cards;
//    // ��ʼ����
//    for (int i = 1; i <= n; ++i) {
//        cards.push_back(i);
//    }
//
//    while (!cards.empty()) {
//        // �ӵ���һ����
//        int throwcard = cards[0];
//        cards.erase(cards.begin());
//        cout << throwcard << " ";
//
//        // ���µĵ�һ���Ʒŵ����
//        if (!cards.empty()) {
//            int newcard = cards[0];
//            cards.erase(cards.begin());
//            cards.push_back(newcard);
//        }
//    }
//    return 0;
//}


#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
		if(!q.empty())
		{
			q.push(q.front());
			q.pop();
		}
	}
	return 0;
}

