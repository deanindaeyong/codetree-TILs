#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int n,k,r,c;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int value=-1;
queue<pair<int,int>> q;
bool visited[101][101]={false,};
int grid[101][101]={0,};
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
bool cango(int x,int y){
    if(visited[x][y]) return false;
    if(x<0||y<0||x>=n||y>=n) return false;
    if(value<=grid[x][y]) return false;
    return true;
}
pair<int,int> bfs(int ax, int ay){
    init();
    q.push(make_pair(ax,ay));
    visited[ax][ay]=true;
    value=grid[ax][ay];
    int maxx=-1;
    while(!q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=xx+dx[i];
            int ny=yy+dy[i];
            if(cango(nx,ny)){
                q.push(make_pair(nx,ny));
                visited[nx][ny]=true;
                if(maxx<grid[nx][ny]){
                    maxx=grid[nx][ny];
                    ax=nx;
                    ay=ny;
                }
                else if(maxx==grid[nx][ny]){
                    if((ax>nx)||(ax==nx&&ay>ny))
                    {ax=nx;
                    ay=ny;                    
                }
            }
        }}
    }
    return make_pair(ax,ay);
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cin>>r>>c;
    r-=1;
    c-=1;
    for(int i=0;i<k;i++){
        pair<int,int> next=bfs(r,c);
        r=next.first;
        c=next.second;
    }
    cout<<r+1<<" "<<c+1;
    return 0;
}