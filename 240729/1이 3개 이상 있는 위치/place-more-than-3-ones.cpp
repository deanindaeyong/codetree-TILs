#include <iostream>
using namespace std;
int n,arr[100][100]={0,};
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
bool inrange(int x,int y){
    return(x>=0 &&x<n && y>=0 &&y<n);
}
int main() {
    // 여기에 코드를 작성해주세요.

    cin>>n;
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cnt_t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int dir_num=0;dir_num<4;dir_num++){
                int nx=i+dx[dir_num],ny=j+dy[dir_num];
                if(inrange(i,j) && arr[nx][ny]==1){
                    cnt++;
                }
            }
            if(cnt>=3){
                cnt_t++;
                
            }cnt=0;
            
        }
    }
    cout<<cnt_t;
    return 0;
}