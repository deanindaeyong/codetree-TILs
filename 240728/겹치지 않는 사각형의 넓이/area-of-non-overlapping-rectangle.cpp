#include <iostream>
using namespace std;
#define MAX 2000
#define OFFSET 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,x2,y1,y2;
    int arr[MAX][MAX]={0,};

    for(int i=0;i<3;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=OFFSET;
        y1+=OFFSET;
        x2+=OFFSET;
        y2+=OFFSET;
        
        for(int x=x1;x<x2;x++){
            for(int y=y1;y<y2;y++){
                if(i==2){
                    arr[x][y]=2;
                }
                else arr[x][y]=1;
            }
        }
        
    }
    int cnt=0;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}