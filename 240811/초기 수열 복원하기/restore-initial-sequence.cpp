#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a[1000],ans[1000];
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=1;i<=1000;i++){
        bool nok=false;
        ans[0]=i;
        for(int j=0;j<n-1;j++){
            ans[j+1]=a[j]-ans[j];
            if(ans[j+1]==ans[j]){
                break;
            }
        }
        for(int k=0;k<n;k++){
         for(int j=0;j<n;j++){
            if(k==j) continue;
            if(ans[k]==ans[j]){
                nok=true;
            }
         }   
        }
        if(!nok){
            break;
        }

    }
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//1