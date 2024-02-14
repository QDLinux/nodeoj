#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> visited(105, vector<char>(105));
void dfs(int x, int y) {
    int n = visited.size();
    int m = visited[0].size();

    // ��鵱ǰλ���Ƿ�Խ����߲��ǿ�ʯ����
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] != '#') {
        return;
    }

    // ����ǰλ�ñ��Ϊ�ѷ���
    visited[x][y] = '*';

    // �ݹ�������������ĸ������Լ����ϡ����ϡ����¡�����
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
    dfs(x - 1, y - 1);
    dfs(x + 1, y - 1);
    dfs(x - 1, y + 1);
    dfs(x + 1, y + 1);
}

int countMineBelts() {
    int n = visited.size();
    int m = visited[0].size();
    int count = 0;

    // ������������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // �����ǰλ��Ϊ��ʯ��������������������
            if (visited[i][j] == '#') {
                dfs(i, j);
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    // ��ȡ�������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> visited[i][j];
        }
    }
    // �����ʯ��������
    int result = countMineBelts();
    cout << result << endl;
    return 0;
}

