#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct state1{
    int ax,ay;
};

int n,k,m,r,c,maxcnt=0;
int visited[101][101]={false,};
int grid[101][101]={0,};
vector<pair<int,int>> rocks,starts;
queue<state1> q;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
             visited[i][j]=false;
    }
}
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==1) return false;
    return true;
}
int bfs(){
    init();
    int cnt=0;
    for(int i=0;i<starts.size();i++){
        int x=starts[i].first;
        int y=starts[i].second;
        q.push({x,y});
        visited[x][y]=true;
    }
    while(!q.empty()){
        state1 curr=q.front();
        q.pop();

        cnt++;
        for(int i=0;i<4;i++){
             int nx=curr.ax+dx[i];
             int ny=curr.ay+dy[i];
             if(cango(nx,ny)){
                q.push({nx,ny});
                visited[nx][ny]=true;}
        }
    }
    return cnt;
}
void cal(int idx,int removed){
    
    if(removed==m){
        maxcnt=max(maxcnt,bfs());
        return;
    } 
    for(int i=idx;i<rocks.size();i++){
        int x=rocks[i].first,y=rocks[i].second;
        grid[x][y]=0;
        cal(i+1,removed+1);
        grid[x][y]=1;
    }

}
int main() {
    cin>>n>>k>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1){
                rocks.push_back({i,j});
            }
        }
            
    }
    for(int i=0;i<k;i++){
        cin>>r>>c;
        r-=1;
        c-=1;
        starts.push_back({r,c});
    }
    cal(0,0);
    cout<<maxcnt;
    // Please write your code here.
    return 0;
}