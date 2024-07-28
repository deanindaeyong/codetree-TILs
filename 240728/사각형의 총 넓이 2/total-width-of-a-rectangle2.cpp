#include <iostream>
using namespace std;
#define OFFSET 100
#define MAX 1000
int n;
int main() {
    cin>>n;
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2;
    int arr[MAX][MAX]={0,};
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=OFFSET;
        y1+=OFFSET;
        x2+=OFFSET;
        y2+=OFFSET;
        for(int x=x1;x<x2;x++){
            for(int y=y1;y<y2;y++){
                arr[x][y]=1;

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