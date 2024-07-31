#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int ans=-1;
    for(int i=0;i<n;i++){
        int len=sizeof(arr[i]);
        for(int j=i+1;j<n;j++){
            int len1=sizeof(arr[j]);
            for(int k=j+1;k<n;k++){
                 bool nok=false;
                int len2=sizeof(arr[k]);
                int mx_len=max({len,len1,len2});
                int one=arr[i],two=arr[j],three=arr[k];
                while(mx_len--){
                if(10<=(one%10+two%10+three%10)){
                    nok=true;
                    
                }
                one/=10;two/=10;three/=10;
                }
                if(nok==0){ans=max(ans,arr[i]+arr[j]+arr[k]);

                }
            }
        }
    }
    cout<<ans;
    return 0;
}