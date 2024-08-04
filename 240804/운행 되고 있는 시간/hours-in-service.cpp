#include <iostream>
#include <climits>
using namespace std;
int n,arr[100][2];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
  
    for(int i=0;i<n;i++){
        int checked[1000]={0,};
        for(int j=0;j<n;j++){
            int cnt=0;
            if(i==j)continue;
            for(int k=arr[j][0];k<arr[j][1];k++){
                checked[k]++;
            }
            for(int k=0;k<1000;k++){
                if(checked[k]>=1){
                    cnt++;
                }
            }
            ans=max(ans,cnt);
        }
        
    }
    cout<<ans;
    return 0;
}