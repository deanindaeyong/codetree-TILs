#include <iostream>
#include <algorithm>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[20][20];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        
        }
    }
    int cnt=0;
    int max_t=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-2;j++){
            for(int k=i+1;k<n;k++){
                for(int l=0;l<n-2;l++){
                    
                    if(arr[i][j]==1||arr[i][j+1]==1||arr[i][j+2]==1||
                      arr[k][l]==1||arr[k][l+1]==1||arr[k][l+2]==1){
                        cnt++;
                      }
                    max_t=max(max_t,cnt);
                }
            }
            
        }
    }
    cout<<max_t;
    return 0;
}