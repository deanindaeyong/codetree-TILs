#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int n,m;
int grid[101][101]={0,};
bool visited[101][101]={false,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
queue<pair<int,int>> q;
int ok=0;
//In grid
bool inrange(int x,int y){
    if(x<0||x>=n||y<0||y>=m) return false;
    else return true;

}

bool going(int x, int y){

    if(!inrange(x,y)) return false;
    if (visited[x][y]||grid[x][y]==0) return false;
    return true;
}
void bfs(){

    while(!q.empty()){
        auto x=q.front().first;
        auto y=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(going(nx,ny)){
                q.push(make_pair(nx,ny));
                visited[nx][ny]=true;
                
                if(make_pair(nx,ny)==make_pair(n-1,m-1)) ok=1;
            }
        }

    }
}
int main() {
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    visited[0][0]=true;
    q.push({0,0});
    bfs();
    cout<<ok;


    // Please write your code here.
    return 0;

}