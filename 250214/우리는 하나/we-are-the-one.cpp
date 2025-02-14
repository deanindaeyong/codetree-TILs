#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,k,u,d;
int grid[9][9]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int maxcnt=0;
bool visited[9][9]={false,};
vector<pair<int,int>> selected;
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n)return false;
    if(visited[x][y]) return false;
    return true;
}
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
int bfs(){
    init();
    queue<pair<int,int>> q;
    int cnt=0;
    for(int i=0;i<selected.size();i++){
        q.push({selected[i].first,selected[i].second});
        visited[selected[i].first][selected[i].second]=true;
    }
    while(!q.empty()){
        int ax=q.front().first;
        int ay=q.front().second;
        q.pop();
        cnt++;
        for(int i=0;i<4;i++){
            int nx=ax+dx[i];
            int ny=ay+dy[i];
            if(cango(nx,ny)&&abs(grid[ax][ay]-grid[nx][ny])>=u&&abs(grid[ax][ay]-grid[nx][ny])<=d){
                q.push({nx,ny});
                visited[nx][ny]=true;
            }
        }

    }
    return cnt;
}
void cal(int idx,int sel_cnt){
    if(sel_cnt==k){
        maxcnt=max(maxcnt,bfs());
        return; 
    }
    for(int i=idx;i<n*n;i++){
        int r=i/n;
        int c=i%n;
        selected.push_back({r,c});
        cal(i+1,sel_cnt+1);
        selected.pop_back();
    }
}
int main() {
    cin>>n>>k>>u>>d;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cal(0,0);
    cout<<maxcnt;
    // Please write your code here.
    return 0;
}