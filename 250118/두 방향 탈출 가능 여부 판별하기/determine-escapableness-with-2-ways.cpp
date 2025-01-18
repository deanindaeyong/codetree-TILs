#include <iostream>
using namespace std;
int n,m;
int grid[100][100]={0,};
int ok=0;
int dx[]={1,0};
int dy[]={0,1};
bool visited[100][100]={false,};
void dfs(int x, int y){
    visited[x][y]=true;

    for(int i=0;i<2;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||nx>=n||ny<0||ny>=m) continue;
        if(grid[nx][ny]==1&&!visited[nx][ny]){
            if(nx==n-1&&ny==m-1) ok=1;
            dfs(nx,ny);
        }
    }

}
int main() {
    // Please write your code here.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            grid[i][j]=x;
        }
    }
    
    dfs(0,0);
    cout<<ok;
    return 0;
}