#include <iostream>
using namespace std;
int n,m;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int a[100],b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int cnt_t=0;
    for(int i=0;i<n-m+1;i++){
        int cnt=0;
        for(int j=i;j<i+m;j++){
            
           for(int k=0;k<m;k++){
            if(a[j]==b[k]){
                cnt++;
            }
           }
           
        }
        if(cnt==m){
            cnt_t++;
           }
    }
    cout<<cnt_t;
    return 0;
}