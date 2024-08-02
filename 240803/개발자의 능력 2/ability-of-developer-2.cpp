#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6];
    int total=0;
    for(int i=0;i<6;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    int sum1=0,sum2=0,sum3=0;
    int maxx;
    int minn;
    int total_min=INT_MAX;
    int cnt=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                for(int l=k+1;l<6;l++){
                    cnt++;
                    sum1=arr[l]+arr[j];
                    sum2=arr[i]+arr[k];
                    sum3=total-sum1-sum2;
                    maxx=max({sum1,sum2,sum3});
                    minn=min({sum1,sum2,sum3});
                    total_min=min(total_min,maxx-minn);
                   // cout<<"cnt= "<<cnt<<" ";
                   // cout<<"maxx= "<<maxx<<" minn= "<<minn<<endl;
                    
                }
            }
        }
    }
    cout<<total_min;
    return 0;
    //123456

}