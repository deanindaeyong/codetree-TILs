#include <iostream>
#include <climits>
using namespace std;
int n;
int x[100],y[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j||j==k)continue;
                ans=min(ans,abs(x[k]-x[j])*abs(x[k]-x[j])+abs(y[k]-y[j])*abs(y[k]-y[j]));
            }
            
        }
    }
    cout<<ans;
    return 0;
}