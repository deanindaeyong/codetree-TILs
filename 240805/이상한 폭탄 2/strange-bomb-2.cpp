#include <iostream>
#include <climits>
using namespace std;
int n,k;
int main() {
    cin>>n>>k;
    int x[100]={0,};
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int ans=INT_MIN;
    int index;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(x[i]==x[j]&& abs(i-j)<=k){
                index=x[i];
            }
            ans=max(ans,index);
        }
    }
    cout<<ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}