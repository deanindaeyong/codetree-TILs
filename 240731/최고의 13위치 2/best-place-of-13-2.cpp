#include <iostream>
#include <algorithm>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[20][20];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        
        }
    } //n=6
    //j=0 1 2
   // 3
    int cnt=0;
    int max_t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            for(int k=0;k<n;k++){
             if(k==i){   
                for(int l=j+3;l<n-2;l++){
                    
                cnt=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2];   
               //         cout<<"i= "<<i<<" j= "<<j<<" k= "<<k<<" l= "<<l<<endl;
                   //     cnt++;
    
                    max_t=max(max_t,cnt);
                }
             }
            else{
                for(int l=0;l<n-2;l++){
                    
                cnt=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2];   
               //         cout<<"i= "<<i<<" j= "<<j<<" k= "<<k<<" l= "<<l<<endl;
                   //     cnt++;
    
                    max_t=max(max_t,cnt);
                }


            }
            }
            
        }
    }
    cout<<max_t;
    return 0;
}