#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int map[50][50]={0,};
int n,m;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
vector<pair<int,int>> safety;
int cnt;
bool visited[50][50]={false,};
void dfs(int x,int y,int k){
    visited[x][y]=true;

    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||nx>=n||ny<0||ny>=m) continue;
        if(map[nx][ny]>k&&!visited[nx][ny]){
            dfs(nx,ny,k);
            
        }
    }
}
int maxx=0;

int main() {
    // Please write your code here.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
        }
    }
     safety.push_back({1,0});
    for(int k=1;k<=100;k++){
        int cnt=0;
        memset(visited, false, sizeof(visited));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(map[i][j]>k&&!visited[i][j]){
                    cnt++;
                    dfs(i,j,k);
                }

            }
        }
        if(maxx<cnt){
            maxx=cnt;
            safety.push_back({k,maxx});
        }
    }
    sort(safety.rbegin(),safety.rend());

    cout<<safety.front().first<<" "<<safety.front().second;
    return 0;
}