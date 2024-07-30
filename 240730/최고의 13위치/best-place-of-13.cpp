#include <iostream>
using namespace std;
int n;
int main() {
    cin>>n;
    int arr[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max_cnt=0,cnt=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-2;j++){
          
                max_cnt=max(max_cnt,arr[i][j]+arr[i][j+1]+arr[i][j+2]);

        }
    }
    cout<<max_cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}