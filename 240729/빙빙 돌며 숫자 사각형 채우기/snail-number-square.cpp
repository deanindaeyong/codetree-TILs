#include <iostream>
using namespace std;
int n,m;

int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};


bool Inrange(int a,int b){
    return(0<=a && a<n && 0<=b && b<m );
}


int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100][100]={0,};
    cin>>n>>m;
    arr[0][0]=1;
    int t=n*m;
    int x=0,y=0,dir=0;
    
    for(int i=2;i<=t;i++){
        int nx=x+dx[dir],ny=y+dy[dir];
        if(!Inrange(nx,ny) || arr[nx][ny]!=0){
            dir=(dir+1)%4;
        }
        x=x+dx[dir];
        y=y+dy[dir];
        arr[x][y]=i;
    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   
    return 0;
}