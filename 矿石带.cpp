#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> visited(105, vector<char>(105));
void dfs(int x, int y) {
    int n = visited.size();
    int m = visited[0].size();

    // 检查当前位置是否越界或者不是矿石区域
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] != '#') {
        return;
    }

    // 将当前位置标记为已访问
    visited[x][y] = '*';

    // 递归遍历上下左右四个方向以及左上、右上、左下、右下
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

    // 遍历整个矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 如果当前位置为矿石区域，则进行深度优先搜索
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
    // 读取矩阵地域
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> visited[i][j];
        }
    }
    // 计算矿石带的数量
    int result = countMineBelts();
    cout << result << endl;
    return 0;
}

