#include <iostream>
using namespace std;
int n,m;
char arr[100][100]={0,};
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool Inrange(int x,int y){
    return (0<=x&&x<n&&0<=y&&y<m);
}
void simulate(){
    int t=n*m;
    char a= 'A';
    int curr_x=0,curr_y=0;
    int dir=0;
    while(t--){
        int nx=curr_x+dx[dir],ny=curr_y+dy[dir];
        if(!Inrange(nx,ny) || arr[nx][ny]!=0){
            dir=(dir+1)%4;
        }
        
        arr[curr_x][curr_y]=a;
        curr_x+=dx[dir];curr_y+=dy[dir];
        a++;
        if(a>'Z'){
            a='A';
        }
        
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
    simulate();
    printstar();
    return 0;
}