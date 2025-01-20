#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n,k;
int grid[101][101]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool visited[101][101]={false,};
queue<pair<int,int>> q;
int answer=0;
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==1) return false;
    return true;
    
}
void bfs(){
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(cango(nx,ny)){
                q.push(make_pair(nx,ny));
                visited[nx][ny]=true;
                answer++;
            }
        }

    }
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        visited[x][y]=true;
        if(grid[x][y]==0){
            answer++;
        }
        
        q.push({make_pair(x,y)});
        bfs();
    }
    cout<<answer;
    // Please write your code here.
    return 0;
}