#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    // i=x축
    // j=y축
    int minn=INT_MAX,maxx_temp;
    for(int i=0;i<=100;i+=2){
        for(int j=0;j<=100;j+=2){
            int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
            //++ 


            for(int k=0;k<n;k++){
                if(arr[k][0]>i && arr[k][1]>j){
                    cnt1++;
                }
            }

            //-+
            for(int k=0;k<n;k++){
                if(arr[k][0]<i && arr[k][1]>j){
                    cnt2++;
                }
            }


            // -- 
            for(int k=0;k<n;k++){
                if(arr[k][0]<i && arr[k][1]<j){
                    cnt3++;
                }
            }

            // +-
            for(int k=0;k<n;k++){
                if(arr[k][0]>i && arr[k][1]<j){
                    cnt4++;
                }
            }
            maxx_temp=max({cnt1,cnt2,cnt3,cnt4});
            minn=min(minn,maxx_temp);
        }
        
    }
    cout<<minn;
    
    return 0;
}