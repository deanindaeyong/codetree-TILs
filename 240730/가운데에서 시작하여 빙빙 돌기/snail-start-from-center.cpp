#include <iostream>
using namespace std;
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
int arr[100][100]={0,};
int n;

bool Inrange(int a,int b){
    return(0<=a&&a<n &&0<=b&&b<n);
}
void bingbing(){
    int t=n*n;
    int dir=0;
    int curr_x=n-1,curr_y=n-1;
    arr[curr_x][curr_y]=t;
    while(t--){
        int nx=curr_x+dx[dir],ny=curr_y+dy[dir];
        if(!Inrange(nx,ny) ||arr[nx][ny]!=0)
            dir=(dir+1)%4;

        
        curr_x+=dx[dir];curr_y+=dy[dir];
        arr[curr_x][curr_y]=t;
        if(t==1){
            break;
        }
        
    }

}
void printNum(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    bingbing();
    printNum();
    
    return 0;
}