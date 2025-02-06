#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int n,k,r,c;
int grid[101][101]={0,};
bool visited[101][101]={false,};
queue<pair<int, int>> q;
pair<int, int> nextt;
int maxx=-1,value;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};


void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
bool Cango(int x,int y){
    if(x<0||x>=n||y>=n||y<0) return false;
    if(grid[x][y]>=maxx) return false;
    if(visited[x][y]) return false;
    return true;
}

pair<int,int> bfs(int ax,int ay){
  
    value=-1;
    init();
    visited[ax][ay]=true;
    q.push(make_pair(ax,ay));
    maxx=grid[ax][ay];
    while(!q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx=xx+dx[i];
            int ny=yy+dy[i];
            if(Cango(nx,ny)){
                visited[nx][ny]=true;
                q.push(make_pair(nx,ny));
                if(grid[nx][ny]>value){
                    value=grid[nx][ny];
                    ax=nx;
                    ay=ny;
                }
                if(grid[nx][ny]==value){
                    if(nx<ax||(nx==ax &&ny<ay)){
                        ax=nx;
                        ay=ny;

                    }
                }
            }
            
            
        }

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
    r-=1;c-=1;
    for(int i=0;i<k;i++){
        nextt=bfs(r,c);
        r=nextt.first;
        c=nextt.second;  
    }
    cout<<r+1<<" "<<c+1;
    return 0;
}



