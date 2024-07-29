#include <iostream>
using namespace std;
int n,t,r,c;
char a;
int dx[4]={0,-1,1,0},dy[4]={1,0,0,-1};
/*
 0123
0
1
2
3
*/
int get_dir(char a){
    if(a=='U')
        return 1;
    else if (a=='D')
        return 2;
    else if (a=='R')
        return 0;
    else return 3;

}
bool inrange(int a,int b){
    return (a>=0 && a<n && b>=0 && b<n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>t;
    int arr[50][50]={0,};
    cin>>r>>c>>a;
    int dir=get_dir(a);
    int curr_x=r-1,curr_y=c-1;
    while(t--){
        int nx = curr_x + dx[dir], ny = curr_y + dy[dir];
        if(!inrange(nx,ny)){
            dir=3-dir;
            
            continue;
        }
        curr_x+=dx[dir];curr_y+=dy[dir];

        

    }

    cout<<curr_x+1<<" "<<curr_y+1;
    return 0;
}