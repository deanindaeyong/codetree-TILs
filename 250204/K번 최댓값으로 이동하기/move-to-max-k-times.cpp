#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;
queue<pair<int,int>> q;

int n,r,x,y,c,k;
int ax,ay;
int grid[101][101]={0,};
bool visited[101][101]={false,};
int value;
int answer;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int maxx;


bool Cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(value<= grid[x][y]) return false;
    return true;
}
pair<int,int> bfs(int ax,int ay){
    while (!q.empty()) q.pop();
    maxx=-1;
    q.push(make_pair(ax,ay));
    visited[ax][ay]=true;
    pair <int,int> ans={ax,ay};
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

           
                if(maxx<grid[nx][ny]){
        
                    ans={nx,ny};
                    maxx=grid[nx][ny];
                }
                else if(grid[nx][ny]==maxx){
                    if(nx<ans.first||(nx==ans.first&&ny<ans.second)){
                        ans.first=nx;
                        ans.second=ny;
                    }
                }
                
                
             
            }
        }
    }

    return ans;
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
    value=grid[r][c];
    for(int i=0;i<k;i++){
        

        pair <int, int> next= bfs(r,c);
        r=next.first;
        c=next.second;
        value=grid[r][c];
        memset(visited,false,sizeof(visited));
    }
    cout<<r+1<<" "<<c+1;

    // Please write your code here.
    return 0;
}