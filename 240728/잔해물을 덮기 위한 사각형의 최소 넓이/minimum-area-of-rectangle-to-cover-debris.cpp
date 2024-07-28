#include <iostream>
using namespace std;
#define MAX 2001
#define OFFSET 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2,arr[MAX][MAX]={0,};
    for(int i=0;i<2;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=OFFSET;
        y1+=OFFSET;
        x2+=OFFSET;
        y2+=OFFSET;

        for(int x=x1;x<x2;x++){
            for(int y=y1;y<y2;y++){
                if(i==1){
                    arr[x][y]=2;
                }else arr[x][y]=1;
            }
        }
    }
    int max_x=0,min_x=2000;
    int max_y=0,min_y=2000;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(arr[i][j]==1){
                if(max_x<i){
                    max_x=i;
                }
                if(max_y<j){
                    max_y=j;
                }
                if(min_x>i){
                    min_x=i;

                }
                if(min_y>j){
                    min_y=j;
                }
            }
        }
    }
    for(int x=min_x;x<=max_x;x++){
        for(int y=min_y;y<=max_y;y++){
            arr[x][y]=1;
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