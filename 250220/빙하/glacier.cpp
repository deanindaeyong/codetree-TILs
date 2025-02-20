#include <iostream>
#include <queue>
using namespace std;
int n,m;
int grid[201][201]={0,};
bool visited[201][201]={false,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

//vector<pair<int,int>> ice;
bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=m) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]==1) return false;
    return true;
}
void markice(){
   queue<pair<int,int>> q;
   //초기화
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        visited[i][j]=false;
    }
   }
   //마킹 아웃사이드 물
    q.push({0,0});
    visited[0][0]=true;
    while(!q.empty()){
        int ax=q.front().first;
        int ay=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=ax+dx[i];
            int ny=ay+dy[i];
            if(cango(nx,ny)){
                q.push({nx,ny});
                visited[nx][ny]=true;
            }
        }
    }

}
int melt(){
    queue<pair<int,int>> q;
    int cnt=0;
    //얼음찾아 넣기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                for(int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx>=0 && nx<n && ny>=0 && ny<m &&visited[nx][ny]&&grid[nx][ny]==0){
                    q.push({i,j});
                    break;
                }    
                }
                
            }
        }
        
    }
    //녹이기

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        grid[x][y]=0;
        cnt++;
    }
    return cnt;
}
int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int time=0;
    int ice=0;
    int lastice=0;
    while(true){
        markice();
        ice=melt();
        if(ice==0) break;
        lastice=ice;
        time++;
    }

    cout<<time<<" "<<lastice;
    // Please write your code here.
    return 0;
}
