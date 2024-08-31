#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // 創建地圖和訪問標記矩陣
    vector<vector<int>> map(m, vector<int>(n));
    vector<vector<bool>> visited(m, vector<bool>(n, false)); // 初始化為未訪問

    int min_value = 1000000; // 設置一個足夠大的初始最小值
    int start_x = 0, start_y = 0;

    // 讀取地圖並找到最小值的起點
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> map[i][j];
            if (map[i][j] < min_value) {
                min_value = map[i][j];
                start_x = i;
                start_y = j;
            }
        }
    }

    int sums = 0;
    int a = start_x, b = start_y;
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // 定義四個方向

    // 使用貪心選擇找到最小值
    while (true) {
        sums += map[a][b];
        visited[a][b] = true;

        int next_x = -1, next_y = -1;
        min_value = 1000000; // 重置為一個足夠大的值

        // 檢查上下左右四個方向
        for (auto& dir : directions) {
            int new_x = a + dir[0];
            int new_y = b + dir[1];

            // 檢查是否在邊界內並且未訪問過
            if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && !visited[new_x][new_y]) {
                if (map[new_x][new_y] < min_value) {
                    min_value = map[new_x][new_y];
                    next_x = new_x;
                    next_y = new_y;
                }
            }
        }

        if (next_x == -1 || next_y == -1) {
            break; // 沒有可移動的地方，退出循環
        }

        a = next_x;
        b = next_y;
    }

    cout << sums << endl;
    return 0;
}
