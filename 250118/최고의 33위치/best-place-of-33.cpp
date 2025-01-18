#include <iostream>
using namespace std;
int arr[20][20]={0,};
int cnt_n(int row,int col){
    int cnt=0;
    for(int i=row;i<row+3;i++){
        for(int j=col;j<col+3;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxn=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(i>n-3||j>n-3) continue;
            maxn=max(maxn,cnt_n(i,j));
        }
    }
    cout<<maxn;
    
    return 0;
}