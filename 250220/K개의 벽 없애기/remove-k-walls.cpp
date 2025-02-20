#include <queue>
#include <iostream>
#include <climits>
using namespace std;
int minn=INT_MAX;
int n,k,r1,c1,r2,c2;
int grid[101][101]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool visited[101][101]={false,};
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==1) return false;
    return true;
}
struct fact{
    int ax,ay,step;
};
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
queue<fact> q;
vector<pair<int,int>> wall;
int bfs(){
    int cnt=-1;
    while(!q.empty())q.pop();
    init();
    q.push({r1,c1,0});
    visited[r1][c1]=true;
    while(!q.empty()){
        int x=q.front().ax;
        int y=q.front().ay;
        int s=q.front().step;
        q.pop();
        if(x==r2&&y==c2){
            
            return s;
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
    return cnt;
}
void removewall(int index,int removed){
    if(removed==k){
        int result=bfs();
        if(result!=-1){
           minn=min(minn,result); 
           
        } 
         return;
    
    }
    for(int i=index;i<wall.size();i++){
        int x=wall[i].first;
        int y=wall[i].second;
        grid[x][y]=0;
        removewall(i+1,removed+1);
        grid[x][y]=1;
    }
}
int main() {
    // Please write your code here.
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1){
                wall.push_back({i,j});
            }
        }
    }
    cin>>r1>>c1;
    r1-=1;c1-=1;
    cin>>r2>>c2;
    r2-=1;c2-=1;
    removewall(0,0);
    if(minn==INT_MAX){ cout<<-1;}else{
        cout<<minn;
    }
    
    return 0;
}