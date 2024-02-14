#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    // 哈希表存储单词和页码的关系
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
        // 查找并输出单词对应的页码
    	//if (wordPageMap.find(queryWord) != wordPageMap.end()) 
		if(wordPageMap.count(queryWord))
		{
        	cout << wordPageMap[queryWord] << endl;
		}
    }
    //wordPageMap.count();判断是否存在 
    return 0;
}

