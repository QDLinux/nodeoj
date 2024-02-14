#include <iostream>
#include <vector>

using namespace std;

bool dfs(const vector<vector<char>>& maze, vector<vector<bool>>& visited, int x, int y, int target_x, int target_y) {
    if (x < 0 || x >= maze.size() || y < 0 || y >= maze[0].size() || maze[x][y] == '#' || visited[x][y]) {
        return false;
    }

    if (x == target_x && y == target_y) {
        return true;
    }

    visited[x][y] = true;

    // 递归搜索上下左右四个方向
    if (dfs(maze, visited, x - 1, y, target_x, target_y)) return true;  // 上
    if (dfs(maze, visited, x + 1, y, target_x, target_y)) return true;  // 下
    if (dfs(maze, visited, x, y - 1, target_x, target_y)) return true;  // 左
    if (dfs(maze, visited, x, y + 1, target_x, target_y)) return true;  // 右

    return false;
}

bool canReachDestination(const vector<vector<char>>& maze, int ha, int la, int hb, int lb) {
    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    return dfs(maze, visited, ha, la, hb, lb);
}

void solve()
{
	int n;
    cin >> n;

    vector<vector<char>> maze(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    int ha, la, hb, lb;
    cin >> ha >> la >> hb >> lb;

    bool result = canReachDestination(maze, ha, la, hb, lb);
    cout << (result ? "YES" : "NO") << endl;
}
int main() {
    int t;
    cin >> t;

    while(t--)
    {
    	solve();
	}

    return 0;
}

