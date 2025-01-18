#include <iostream>
#include <algorithm>
using namespace std;
int n;
int map[26][26]={0,};
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool visited[26][26]={false,};
int cnt_p;
int cnt_v;
int temp[26]={0,};
void dfs(int x, int y){
    visited[x][y]=true;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||nx>=n||ny<0||ny>=n) continue;
        if(map[nx][ny]==1&&!visited[nx][ny]){
            cnt_p++;
            dfs(nx,ny);
        }
    }
}
int main() {
    // Please write your code here.
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cnt_p=0;
            if(map[i][j]==1&&!visited[i][j])
            {   cnt_p++;
                cnt_v++;
                dfs(i,j);
                temp[cnt_v]=cnt_p;
            }
            
        }
    }
    sort(temp,temp+cnt_v+1);
    cout<<cnt_v<<endl;
    for(int i=0;i<26;i++){
        if(temp[i]>0){
            cout<<temp[i]<<endl;
        }
    }
    return 0;
}