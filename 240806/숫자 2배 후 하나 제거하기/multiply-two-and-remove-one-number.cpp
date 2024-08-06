#include <iostream>
#include <climits>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minn=INT_MAX;
    for(int i=0;i<n;i++){
        arr[i]*=2;
        
        for(int j=0;j<n;j++){
            int temp[100]={};
            int cnt=0;
            for(int k=0;k<n;k++){
                if(k!=j)temp[cnt++]=arr[k];
            }
            int sum=0;
            for(int l=0;l<n-2;l++){
                sum+=abs(temp[l]-temp[l+1]);
            }
            minn=min(minn,sum);
        }
        arr[i]/=2;
    }
    cout<<minn;
    return 0;
}