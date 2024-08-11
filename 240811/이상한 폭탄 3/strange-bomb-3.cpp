#include <iostream>
using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int a[1000000],ans[1000000]={0,};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j]){
                if(abs(i-j)<=k){
                    ans[a[i]]++;
                }
            }

        }
    }
    int maxx=0,index=0;
    for(int i=0;i<=1000000;i++){
        if(maxx<ans[i]){
            index=i;
            maxx=ans[i];
        }
    }
    cout<<index;

    return 0;
}