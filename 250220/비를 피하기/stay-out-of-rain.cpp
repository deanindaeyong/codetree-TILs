#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,h,m;
int grid[101][101]={0,};
int ans[101][101]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool visited[101][101]={false,};

struct fact{
    int ax,ay,step;
};
vector<fact> person;
queue<fact> q;
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    if(grid[x][y]==1) return false;
    if(visited[x][y]) return false;
    return true;
}
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
}
//1=벽, 2=사람 3=비피할수있는 공간 0=이동가능
int bfs(){
    init();
    
    int cnt=-1;
    while(!q.empty()){
        int x=q.front().ax;
        int y=q.front().ay;
        int s=q.front().step;
        q.pop();
        if(grid[x][y]==3){
            cnt=s;
            return cnt;
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
int main() {
    cin>>n>>h>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==2){
                person.push_back({i,j,0});
            }
        }
    }
    for(int i=0;i<h;i++){
        int x=person[i].ax;
        int y=person[i].ay;
        q.push({x,y,0});
        visited[x][y]=true;
        int s=bfs();
        ans[x][y]=s;
        while(!q.empty()) q.pop();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}