#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5];
    int total=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    int minn=INT_MAX;
  
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(i==j||i==k||j==k) continue;
                sum1=arr[i]+arr[j];
                sum2=arr[k];
                sum3=total-sum1-sum2;
                if(sum1==sum2|| sum1==sum3||sum2==sum3)
                continue;
                minn=min(minn,max({sum1,sum2,sum3})-min({sum1,sum2,sum3}));
                
            }
        }
    }
    cout<<minn;
    return 0;
}