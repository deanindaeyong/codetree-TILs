#include <iostream>
using namespace std;
#define MAX 201
#define OFFSET 100
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int x1,y1,x2,y2,arr[MAX][MAX]={0,};
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=OFFSET;
        y1+=OFFSET;
        x2+=OFFSET;
        y2+=OFFSET;
        for(int x=x1;x<x2;x++){
            for(int y=y1;y<y2;y++){
                if(i%2==0){
                    arr[x][y]=1;//첫번째 빨간색
                }
                else arr[x][y]=2;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(arr[i][j]==2){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}