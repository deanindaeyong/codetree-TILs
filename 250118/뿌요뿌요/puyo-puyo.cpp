#include <iostream>
#include <vector>
using namespace std;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int block_cnt;
int block_size;
int n;
int map[100][100]={0,};
int maxx=1;
bool visited[100][100]={false,};
vector<pair<int,int>> block;
void reset(int z){
    for(int x=0;x<z;x++){
        for(int y=0;y<z;y++){
            visited[x][y]=false;
        }
    }
}
void dfs(int x,int y,int k){
    visited[x][y]=true;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||ny<0||nx>=n||ny>=n) continue;
        if(map[nx][ny]==k&&!visited[nx][ny]){
            dfs(nx,ny,k);
            block_size++;
        }
    }
}
int main() {
    cin>>n;
    //block.push_back({block_cnt,block_size});
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    for(int k=1;k<=100;k++){
  
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                block_size=0;
                if(map[i][j]==k&&!visited[i][j]){
                    
                    block_size++;
                    dfs(i,j,k);
                }
               if(block_size>=4){
                block_cnt++;
               }
               maxx=max(maxx,block_size);
               
            }
        }
    }
    cout<<block_cnt<<" "<<maxx;
    // Please write your code here.
    return 0;
}