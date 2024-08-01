#include <iostream>
#include <climits>
using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int arr[100]={0,};
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[b]+=a;

    }
    int mx=0;
    for(int i=0;i<n;i++){
        
        for(int j=i-k;j<n;j++){
            if(i-k<0) continue;
            int cnt=0;
            for(int l=i-k;l<=j+2*k;l++){
                cnt+=arr[l];
            }
            mx=max(mx,cnt);
        }
        
    }
    cout<<mx;
    return 0;
}