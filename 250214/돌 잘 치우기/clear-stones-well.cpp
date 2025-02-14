#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, k, m, maxReachable = 0;
int grid[101][101];  // 0: 이동 가능, 1: 돌
vector<pair<int, int>> rocks, starts;  // 돌과 시작점 저장
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

// BFS 실행하여 탐색 가능한 칸 개수 계산
int bfs() {
    bool visited[101][101] = {};
    queue<pair<int, int>> q;
    
    for (const pair<int, int>& start : starts) {
        int sx = start.first, sy = start.second;
        q.push({sx, sy});
        visited[sx][sy] = true;
    }

    int cnt = 0;
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        cnt++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny] || grid[nx][ny] == 1) 
                continue;
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
    return cnt;
}

// 백트래킹을 사용하여 `M`개의 돌을 제거하는 조합을 탐색
void removeRocks(int idx, int removed) {
    if (removed == m) {
        maxReachable = max(maxReachable, bfs());
        return;
    }

    for (int i = idx; i < rocks.size(); i++) {
        int x = rocks[i].first, y = rocks[i].second;
        grid[x][y] = 0;  // 돌 제거
        removeRocks(i + 1, removed + 1);
        grid[x][y] = 1;  // 백트래킹 (돌 복구)
    }
}

int main() {
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) rocks.push_back({i, j});
        }

    for (int i = 0; i < k; i++) {
        int r, c;
        cin >> r >> c;
        starts.push_back({r - 1, c - 1});  // 1-based → 0-based 변환
    }

    removeRocks(0, 0);  // 백트래킹 시작
    cout << maxReachable << endl;
}
