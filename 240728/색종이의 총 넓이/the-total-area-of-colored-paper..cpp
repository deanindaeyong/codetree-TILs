#include <iostream>
using namespace std;
#define MAX 201
#define OFFSET 100
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,arr[MAX][MAX]={0,};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1>>y1;
        int x2=x1+8+OFFSET;
        int y2=y1+8+OFFSET;
        x1+=OFFSET;
        y1+=OFFSET;
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
               // cout<<arr[i][j]<<" "<<i<<" "<<j<<endl;
               cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}