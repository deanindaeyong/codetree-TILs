#include <iostream>
#include <climits>
using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int arr[1000]={0,};
    int mx=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[b]+=a;
        if(k>100){
            mx+=arr[b];
            
        }
    }
    
    for(int i=0;i<100;i++){
        
        for(int j=i-k;j<100;j++){
            if(i-k<0) continue;
            int cnt=0;
            for(int l=i-k;l<=i+k;l++){
                if(l>100)continue;
                cnt+=arr[l];
            }
            
            mx=max(mx,cnt);
        }
        
    }
    cout<<mx;
    return 0;
}