#include <iostream>
using namespace std;
int n,m;
int num_t(int a){
    if(a==1){
        return 1;
    }
    return num_t(a-1)*a;
}
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
            //    cout<<"a[j]= "<<a[j]<<" b[k]="<<b[k]<<endl;
            }
           }
       //    cout<<"cnt= "<<cnt<<endl;
        }
        if(cnt>=m&& cnt<=num_t(m)){
            cnt_t++;
           }
    }
  
  
    cout<<cnt_t;
    return 0;
}