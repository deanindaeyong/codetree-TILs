#include <iostream>
using namespace std;
int n,m,a,b;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
bool Inrange(int x,int y){
    return (0<=x &&x<n &&0<=y&&y<n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int arr[100][100]={0,};
    int curr_x=0,curr_y=0;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        curr_x=a-1;curr_y=b-1;
        arr[curr_x][curr_y]=1;
        int cnt=0;
        for(int j=0;j<4;j++){
            int nx=curr_x+dx[j];
            int ny=curr_y+dy[j];
            if(Inrange(nx,ny) && arr[nx][ny]==1){
                cnt++;
            }
        }
        if(cnt==3){
            cout<<1<<endl;
        }else cout<<0<<endl;

    }
    return 0;
}