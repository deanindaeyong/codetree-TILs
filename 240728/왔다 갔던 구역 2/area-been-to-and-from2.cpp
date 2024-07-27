#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,x,arr[10000]={0,};
    char y;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int curr,index=0,x1=0;
        cin>>x>>y;
        if(i==0){
            curr=1000;
        }
        
        if(y=='R'){

        for(int j=curr;j<curr+1;j++){
            ++arr[j];
            index=j;
            }
        }else{
            for(int j=curr;j>curr-x-1;j--){
            ++arr[j];
            index=j;
            }

        }
        curr=index;
    }
    
    int cnt=0;
    for(int i=0;i<10000;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}