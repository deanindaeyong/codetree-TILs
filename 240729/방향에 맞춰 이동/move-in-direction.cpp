#include <iostream>
#define MAX 1001
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int direction[4]={'W','S','N','E'};
    int dx[4]={-1,0,0,1},dy[4]={0,-1,1,0};
    char a;
    int b;
    int curr_x=0,curr_y=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a=='W'){
            curr_x+=b*dx[0];curr_y+=b*dy[0];
        }
        else if(a=='S'){
            curr_x+=b*dx[1];curr_y+=b*dy[1];
        }
        else if(a=='N'){
            curr_x+=b*dx[2];curr_y+=b*dy[2];
        }
        else curr_x+=b*dx[3];curr_y+=b*dy[3];


    }
    cout<<curr_x<<" "<<curr_y;
    return 0;
}