//#include <iostream>
//#include <unordered_set>
//#include <string>
//using namespace std; 
//int main() {
//    int N, M;
//    cin >> N;
//
//    // ��ȡ��������ͨ����ͬѧ������
//    unordered_set<string> studentsHeard;
//    for (int i = 0; i < N; ++i) {
//        string studentName;
//        cin >> studentName;
//        studentsHeard.insert(studentName);
//    }
//
//    cin >> M;
//
//    // ����Bugall����������������ͨ��������
//    int friendsHeard = 0;
//    for (int i = 0; i < M; ++i) {
//        string friendName;
//        cin >> friendName;
//        if (studentsHeard.count(friendName) > 0) {
//            // �����������˴���ͨ��
//            friendsHeard++;
//        }
//    }
//
//    cout << friendsHeard << endl;
//
//    return 0;
//}






//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//    int n,m;
//    
//    cin >> n;
//    vector<string> studentsHeard(n);
//    for (int i = 0; i < n; i++) 
//	{
//        cin >> studentsHeard[i];
//    }
//
//    cin >> m;
//    int friendsHeard = 0;
//    for (int i = 0; i < m; i++) 
//	{
//        string friendName;
//        cin >> friendName;
//        
//        // ʹ�� find �� studentsHeard �в��� friendName
//        if (find(studentsHeard.begin(), studentsHeard.end(), friendName) != studentsHeard.end()) {
//            friendsHeard++;
//        }
//    }
//
//    cout << friendsHeard << endl;
//
//    return 0;
//}





//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//    int n,m;
//    
//    cin >> n;
//    vector<string> studentsHeard(n);
//    for (int i = 0; i < n; i++) 
//	{
//        cin >> studentsHeard[i];
//    }
//
//    sort(studentsHeard.begin(), studentsHeard.end());
//
//    cin >> m;
//    int friendsHeard = 0;
//    for (int i = 0; i < m; i++) 
//	{
//        string friendName;
//        cin >> friendName;
//        // ʹ�ö��ֲ���
//        if (binary_search(studentsHeard.begin(), studentsHeard.end(), friendName)) 
//		{
//            friendsHeard++;
//        }
//    }
//
//    cout << friendsHeard << endl;
//
//    return 0;
//}




#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	set<string> s;
	for(int i=1;i<=n;i++)
	{
		string name;
		cin>>name;
		s.insert(name);
	}
	
//	for(set<string>::iterator it=s.begin();it!=s.end();it++)
//	{
//		int x= *it;
//		cout<<it<<" ";
//	}
	cin>>m;
	int ans=0;
	for(int i=1;i<=m;i++)
	{
		string friends;
		cin>>friends;
		if(s.count(friends)) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
