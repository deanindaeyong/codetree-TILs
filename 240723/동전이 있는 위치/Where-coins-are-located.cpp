#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,a,b;
    cin>>n>>m;
    int arr[n][n]={};
    for(int x=0;x<m;x++){
        cin>>a>>b;
        arr[a-1][b-1]=1;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}