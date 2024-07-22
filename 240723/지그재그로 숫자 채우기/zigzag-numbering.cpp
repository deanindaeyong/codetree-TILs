#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int arr[n][m],num=0;
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            arr[j][i]=num;
            num++;
        }}

        else {for(int x=n-1;x>=0;x--){
            arr[x][i]=num;
            num++;
        }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}