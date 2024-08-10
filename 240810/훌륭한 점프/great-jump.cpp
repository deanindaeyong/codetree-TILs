#include <iostream>
using namespace std;
int n,k;
int a[100];
//a는 최댓값
bool ok(int max_val){
    int available_indices[100]={};
    int cnt=0;
    for(int i=0;i<n;i++ ){
        if(a[i]<=max_val){
            available_indices[cnt++]=i;
        }
    }
    for(int i=1;i<cnt;i++){
        int dis=available_indices[i]-available_indices[i-1];
        if(dis>k)
        return false;
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int maxxx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxxx=max(maxxx,a[i]);
    }
    int minn=100,maxx=-1;
    for(int i=1;i<=max(a[0],a[n-1]);i++){
        if(ok(i)){
            maxx=max(maxx,i);

        }
        
    }
//cout<<minn<<endl;
    cout<<maxx;
    return 0;
}