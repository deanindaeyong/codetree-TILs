#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,k;
int grid[101][101]={0,};
int ans[101][101];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool visited[101][101]={false,};
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==0) return false;
    return true;
}
struct fact{
    int ax,ay,time;
};
vector<fact> rottenmandarin;
queue<fact> q;

void bfs(){
    for(int i=0;i<rottenmandarin.size();i++){
        q.push({rottenmandarin[i].ax,rottenmandarin[i].ay,0});
        visited[rottenmandarin[i].ax][rottenmandarin[i].ay]=true;
        ans[rottenmandarin[i].ax][rottenmandarin[i].ay]=0;
    }

    while(!q.empty()){
        int x=q.front().ax;
        int y=q.front().ay;
        int t=q.front().time;
        q.pop();

        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(cango(nx,ny)){
                q.push({nx,ny,t+1});
                ans[nx][ny]=t +1 ;
                visited[nx][ny]=true;
            }

        }
    }
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==2){
                rottenmandarin.push_back({i,j,0});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=-1;
            
        }

    }
    bfs();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1&&ans[i][j]==-1){
                ans[i][j]=-2;
            }
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}