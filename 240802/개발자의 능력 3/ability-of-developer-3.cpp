#include <iostream>
#include <climits>
using namespace std;
int a;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6];
    int max=0;
    int sum_t=0;
    for(int i=0;i<6;i++){
        cin>>arr[i];
        sum_t+=arr[i];
    }
    int diff=0;
    int sum1=0,sum2=0;
    int mint=INT_MAX;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                sum1=arr[k]+arr[i]+arr[j];
                mint=min(mint,abs(sum_t-sum1-sum1));
            }
        }
    }
    cout<<mint;
    return 0;
}