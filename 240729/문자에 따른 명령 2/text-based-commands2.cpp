#include <iostream>
using namespace std;
string d;

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    int curr_x=0,curr_y=0;
    int dir=0;
    cin>>d;
    for(int i=0;i<d.length();i++){
        if(d[i]=='L'){
            dir=(dir-1+4)%4;
        }else if(d[i]=='R'){
            dir=(dir+1)%4;
        }else{
            dir=dir;
            curr_x+=dx[dir];curr_y+=dy[dir];
            } 
    }
    cout<<curr_x<<" "<<curr_y;
    return 0;
}