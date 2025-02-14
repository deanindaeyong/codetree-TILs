#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,m,k;
int visited[101][101],grid[101][101]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
vector<pair<int,int>> starts,rocks;
int maxcnt=0;
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(grid[x][y]==1) return false;
    if(visited[x][y]) return false;
    return true;
}
int bfs(){
    queue<pair<int,int>> q;
    init();
    int cnt=0;
    for(int i=0;i<starts.size();i++){
        int x=starts[i].first,y=starts[i].second;
        q.push({x,y});
        visited[x][y]=true;
    }
    while(!q.empty()){
        int ax=q.front().first,ay=q.front().second;
        q.pop();
        cnt++;
        for(int i=0;i<4;i++){
            int nx=ax+dx[i],ny=ay+dy[i];
            if(cango(nx,ny)){
                q.push({nx,ny});
                visited[nx][ny]=true;
            }
        }
    }
    return cnt;
}
void cal(int idx,int removed){
    if(removed==m){
        maxcnt=max(maxcnt,bfs());
        return ;
    }
    for(int i=idx;i<rocks.size();i++){
        int x=rocks[i].first,y=rocks[i].second;
        grid[x][y]=0;
        cal(i+1,removed+1);
        grid[x][y]=1;
    }

}
int main() {
    // Please write your code here.
    cin>>n>>k>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1) rocks.push_back({i,j});
        }
    }
    for(int i=0;i<k;i++){
        int r,c;
        cin>>r>>c;
        starts.push_back({r-1,c-1});
    }
    cal(0,0);
    cout<<maxcnt;
    return 0;
}