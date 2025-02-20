#include <iostream>
#include <queue>
using namespace std;
int n,r1,c1,r2,c2;
int grid[101][101]={0,};
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

bool cango(int x,int y){
    if(x<0||y<0||x>=n||y>=n) return false;
    return true;
}
struct fact{
    int ax,ay,step;
};
queue<fact> q;
int bfs(){
    
    int cnt=-1;
    while(!q.empty()){
        int x=q.front().ax;
        int y=q.front().ay;
        int s=q.front().step;
        q.pop();
        if(x==r2&&y==c2){
            cnt=s;
            return cnt;
        }
        for(int i=0;i<8;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(cango(nx,ny)){
                q.push({nx,ny,s+1});
            }
        }
    }
    return cnt;
}
int main() {
    cin>>n;
    cin>>r1>>c1>>r2>>c2;
    r1-=1;c1-=1;
    r2-=1;c2-=1;
    q.push({r1,c1,0});
    cout<<bfs();
    // Please write your code here.
    return 0;
}