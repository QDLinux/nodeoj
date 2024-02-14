#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, horseX, horseY;
    cin >> n >> m >> horseX >> horseY;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // ��ʼ�����
    dp[0][0] = 1;

    // ��ʼ�����λ�ü�����Ƶ�
    vector<pair<int, int>> horseControlPoints = {
        make_pair(horseX - 2, horseY - 1), make_pair(horseX - 2, horseY + 1),
        make_pair(horseX - 1, horseY - 2), make_pair(horseX - 1, horseY + 2),
        make_pair(horseX + 1, horseY - 2), make_pair(horseX + 1, horseY + 2),
        make_pair(horseX + 2, horseY - 1), make_pair(horseX + 2, horseY + 1)
    };

    // ������ʼ����Ŀ��Ƶ�
    dp[horseX][horseY]=-1; 
    for (int k = 0; k < horseControlPoints.size(); ++k) {
        int i = horseControlPoints[k].first;
        int j = horseControlPoints[k].second;
        if (i >= 0 && i <= n && j >= 0 && j <= m) {
            dp[i][j] = -1;
        }
    }

    // ��̬�滮����·������
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (dp[i][j] != -1) {
                if (i > 0) dp[i][j] += (dp[i - 1][j] != -1) ? dp[i - 1][j] : 0;
                if (j > 0) dp[i][j] += (dp[i][j - 1] != -1) ? dp[i][j - 1] : 0;
            }
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}

