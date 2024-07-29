#include <iostream>
using namespace std;
int n,m;
int arr[100][100]={0,};
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

bool Inrange(int a,int b){
    return (0<=a&&a<n&&0<=b&&b<m);
}
void square(){
    
    int cnt=0;
    int curr_x=0,curr_y=0;
    int t=m*n;
    int dir=0;

    while(t--){
        int nx=curr_x+dx[dir],ny=curr_y+dy[dir];
        if(!Inrange(nx,ny)||arr[nx][ny]!=0){
            dir=(dir+1)%4;
        }
        cnt++;
        arr[curr_x][curr_y]=cnt;
        curr_x+=dx[dir];curr_y+=dy[dir];
        
    }
    

}
void printstar(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    square();
    printstar();
    return 0;
}