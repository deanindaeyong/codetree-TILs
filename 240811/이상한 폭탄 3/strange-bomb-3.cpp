#include <iostream>
using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int a[1000001]={0,},ans[1000001]={0,};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found =false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j]){
                if(abs(i-j)<=k){
                    ans[a[i]]++;
                    found=true;
                  //  cout<<i<<" j= "<<j<<" ans[1]= "<<ans[1]<<endl;
                }
            }

        }
    }
    int maxx=0,index=0;
    for(int i=0;i<=1000000;i++){
        if(maxx<=ans[i]){
            index=i;
            maxx=ans[i];
            //cout<<index;
        }
    }
    if(!found){
        cout<<0;
    }else cout<<index;
    //cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
    return 0;
}