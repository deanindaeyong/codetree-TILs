#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,x,arr[2001]={0,};
    char y;
    cin>>n;
    int curr=1000;
    for(int i=0;i<n;i++){
        int index=0;
        cin>>x>>y;
    
        
        if(y=='R'){

        for(int j=1;j<=x;j++){
            ++arr[curr+j];

            }
        curr+=x;
            
        }else{
            for(int j=1;j<=x;j++){
            ++arr[curr-j];
    
            }
            curr-=x;
           

        }
    
    }
    
    int cnt=0;
    for(int i=0;i<2001;i++){
        if(arr[i]>=2){
       //     cout<<arr[i]<<" "<<i<<endl;
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}