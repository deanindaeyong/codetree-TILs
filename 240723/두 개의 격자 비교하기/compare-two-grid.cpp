#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int arr[n][m],arr2[n][m],arr3[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
            if(arr[i][j]==arr2[i][j]){
                arr3[i][j]=0;

            }else arr3[i][j]=1;
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}