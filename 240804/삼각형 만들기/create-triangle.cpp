#include <iostream>
#include <climits>
#define OFFSET 10000
using namespace std;
int n,x[100]={0,},y[100]={0,};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j ||j==k||k==i) continue;
                if(x[i]==x[j] &&y[j]==y[k]){
                    ans=max(ans,abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-(x[j]*y[i]+x[k]*y[j]+x[i]*y[k])));
                }
            }
        }
    }
    cout<<ans;
    return 0;
}