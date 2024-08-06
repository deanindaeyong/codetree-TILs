#include <iostream>
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int ans[4]={0,},a[100],b[100],c[100];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        
    }
    int maxx=0;
    for(int i=1;i<=3;i++){
        int ans[4]={0,};
        ans[i]=1;
        int cnt=0;
        for(int j=0;j<n;j++){
            int temp=ans[a[j]];
            ans[a[j]]=ans[b[j]];
            ans[b[j]]=temp;
            if(ans[c[j]]==1){
                cnt++;
            }
        }
        maxx=max(maxx,cnt);
    }
    cout<<maxx;
    return 0;
}