#include <iostream>
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
int dir(char a){
    if(a=='N')
        return 3;
    else if(a=='E')
    return 0;
    else if(a=='S')
    return 1;
    else return 2;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,b;
    char a;
    cin>>n;
    int direction=0;
    int arr[1000][1000]={0,};
    int input[1000];
    arr[0][0]=-1;
    int curr_x=0,curr_y=0;
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        
        while(b--){
            curr_x+=dx[dir(a)];
            curr_y+=dy[dir(a)];
            cnt++;
            if(curr_x==0 && curr_y==0){
                cout<<cnt;
                return 0;
            }
        }

    }
    cout<<-1;
    
    return 0;
}