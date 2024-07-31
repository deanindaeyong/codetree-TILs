#include <iostream>

using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx_v=0;
    //6 3
    // 9 1 2 4 7 1
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<i+k;j++)
        sum+=arr[j];
        mx_v=max(mx_v,sum);
    }
    cout<<mx_v;
    return 0;
}