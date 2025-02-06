#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, k, m;
int grid[101][101];
bool visited[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct State {
    int x, y;
};

bool Cango(int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= n) return false;
    if (grid[x][y] == 1) return false;
    return true;
}

int bfs(vector<pair<int, int>>& starts) {
    queue<State> q;
    for (auto& start : starts) {
        q.push({start.first, start.second});
        visited[start.first][start.second] = true;
    }

    int cnt = 0;
    while (!q.empty()) {
        State current = q.front();
        q.pop();
        cnt++;

        for (int i = 0; i < 4; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            if (Cango(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return cnt;
}

void removeRocks(vector<pair<int, int>>& rocks, int idx, int removed, int& maxCnt, vector<pair<int, int>>& starts) {
    if (removed == m) {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, false);
        int cnt = bfs(starts);
        maxCnt = max(maxCnt, cnt);
        return;
    }

    for (int i = idx; i < rocks.size(); i++) {
        grid[rocks[i].first][rocks[i].second] = 0;
        removeRocks(rocks, i + 1, removed + 1, maxCnt, starts);
        grid[rocks[i].first][rocks[i].second] = 1;
    }
}

int main() {
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<pair<int, int>> starts(k);
    for (int i = 0; i < k; i++) {
        cin >> starts[i].first >> starts[i].second;
        starts[i].first--;
        starts[i].second--;
    }

    vector<pair<int, int>> rocks;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                rocks.push_back({i, j});
            }
        }
    }

    int maxCnt = 0;
    removeRocks(rocks, 0, 0, maxCnt, starts);

    cout << maxCnt << endl;
    return 0;
}
/*
#include <iostream>
#include <queue>
using namespace std;
int n,k,m,r,c;
int grid[101][101]={0,};
bool visited[101][101]={false,};
queue<State> q;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int cnt=0;
struct State{
    int x,y,num;
};

bool Cango(int x,int y){

    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==1) return false;
    return true;
}
// 돌 치우기
void bfs(){
    
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(Cango(nx,ny)){
                visited[nx][ny]=true;
                q.push(make_pair(nx,ny));
                cnt++;
            }
        }
    }
}
int main() {
    cin>>n>>k>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<k;i++){
        cin>>r>>c;
        r-=1;
        c-=1;
        q.push(make_pair(r,c));
        visited[r][c]=true;
        cnt++;
    }
    bfs();
    // Please write your code here.
    return 0;
}
*/