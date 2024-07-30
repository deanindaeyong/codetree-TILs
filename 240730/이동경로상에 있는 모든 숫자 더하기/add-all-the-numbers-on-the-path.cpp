#include <iostream>
using namespace std;
int n,t;
string a;
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int arr[100][100]={0,};
/*int dir(char a){
    if(a=='R')
    return 1;
    else if(a=='L')
    return -1;
    else return dir;
}*/

bool InRange(int a, int b){
    return (0<=a&& a<n &&0<=b &&b<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>t;
    cin>>a;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int curr_x=n/2,curr_y=n/2;
    int x=t;
    int dir=0;
    cnt+=arr[curr_x][curr_y];
    for(int i=0;i<a.length();i++){
        if(a[i]=='R'){
            dir=(dir+1)%4;
        }else if(a[i]=='L'){
            dir=(dir+3)%4;
        }else dir=dir;
        //cnt+=arr[curr_x][curr_y];
        //cout<<"curr_x = "<<curr_x<<" curr_y = "<<curr_y<<endl;
        //cout<<" a[i]="<<a[i]<<endl;
        int nx=curr_x+dx[dir],ny=curr_y+dy[dir];
        if(InRange(nx,ny)&&arr[nx][ny]!=0){
            cnt+=arr[nx][ny];
          //  cout<<"arr[nx][ny]= "<<arr[nx][ny]<<endl;
          //  cout<<"nx ="<<nx<<" ny="<<ny<<" ";
          //  cout<<"curr_x = "<<curr_x<<" curr_y = "<<curr_y<<" a[i]="<<a[i]<<endl;
            curr_x+=dx[dir];curr_y+=dy[dir];
            


        }
            
    }
    cout<<cnt;
    return 0;
}