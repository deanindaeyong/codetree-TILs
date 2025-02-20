#include <iostream>
#include <queue>
using namespace std;
int n,m;
int grid[101][101]={0,};
int visited[101][101]={false,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=m) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==0) return false;
    return true;
}
struct fact{
    int ax,ay,step;
};
int bfs(){
    queue<fact> q;
    q.push({0,0,0});
    visited[0][0]=true;
    int ss=-1;
    while(!q.empty()){
        int x=q.front().ax;
        int y=q.front().ay;
        int s=q.front().step;
        q.pop();
        if(x==n-1&&y==m-1) {
            ss=s;
            break;
        }
        
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(cango(nx,ny)){
                q.push({nx,ny,s+1});
                visited[nx][ny]=true;
            }
        }

    }
    return ss;
}
int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int cnt=bfs();
    cout<<cnt;
    // Please write your code here.
    return 0;
}