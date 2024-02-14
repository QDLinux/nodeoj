#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    // ��ϣ��洢���ʺ�ҳ��Ĺ�ϵ
    //unordered_map<string, int> wordPageMap;
    map<string, int> wordPageMap;

    for (int i = 0; i < n; i++) 
	{
        string word;
		int page;
        cin >> word >> page;
        wordPageMap[word] = page;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) 
	{
        string queryWord;
        cin >> queryWord;
        // ���Ҳ�������ʶ�Ӧ��ҳ��
    	//if (wordPageMap.find(queryWord) != wordPageMap.end()) 
		if(wordPageMap.count(queryWord))
		{
        	cout << wordPageMap[queryWord] << endl;
		}
    }
    //wordPageMap.count();�ж��Ƿ���� 
    return 0;
}

