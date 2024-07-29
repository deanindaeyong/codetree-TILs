#include <iostream>
#include <algorithm>
using namespace std;
string a;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
 

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a;
    int curr_x=0,curr_y=0;
    int t=0;
    int dir=0;
    for(int i=0;i<a.length();i++){
        
        if(a[i]=='R'){
            dir=(dir+1)%4;   
            ++t;
            continue;
        }
        //3
        else if(a[i]=='L'){
            dir=(dir+3)%4;
            ++t;
            continue;
        }
        curr_x+=dx[dir];
        curr_y+=dy[dir];
        ++t;
        if(curr_x==0 && curr_y==0){
            cout<<t;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}