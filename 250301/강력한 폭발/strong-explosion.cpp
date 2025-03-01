#include <iostream>
#include <vector>

using namespace std;
int n;
int grid[21][21]={0,};
int dx[4]={-2,-1,1,2};
int dy[4]={0,0,0,0};
int dxx[4]={-1,1,0,0};
int dyy[4]={0,0,-1,1};
int dxxx[4]={-1,-1,1,1};
int dyyy[4]={-1,1,1,-1};
int maxx=0;

struct bomb_pos{
    int ax,ay;
};
vector<int> bomb_shape;
vector<bomb_pos> bomb;
int bomb_cnt(){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                cnt++;
            }
        }
    }
    return cnt;
}
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            grid[i][j]=0;
        }
}
for(int i=0;i<bomb.size();i++){
    int x=bomb[i].ax;
    int y=bomb[i].ay;
    grid[x][y]=1;
}
}
int put_bomb(vector<int>& x){
    init();
    for(int i=0;i<x.size();i++){
        vector<int> ox,oy;
        if(x[i]==0){
            ox.assign(dx,dx+4);
            oy.assign(dy,dy+4);
        }else if(x[i]==1){
            ox.assign(dxx,dxx+4);
            oy.assign(dyy,dyy+4);
        }
        else{ox.assign(dxxx,dxxx+4);
            oy.assign(dyyy,dyyy+4);}
        for(int j=0;j<4;j++){
            int nx=bomb[i].ax+ox[j];
            int ny=bomb[i].ay+oy[j];
            if(nx<0||ny<0||nx>=n||ny>=n) continue;
            grid[nx][ny]=1;
        }
        
    }
    int i=bomb_cnt();
    return i;
}
void func(int cur_num){
    if(cur_num==bomb.size()){
        maxx=max(maxx,put_bomb(bomb_shape));
        return;
    }
    for(int i=0;i<3;i++){
        bomb_shape.push_back(i);
        func(cur_num+1);
        bomb_shape.pop_back();
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1){
                bomb.push_back({i,j});
            }
        }
    }
    func(0);
    cout<<maxx;
    // Please write your code here.
    return 0;
}