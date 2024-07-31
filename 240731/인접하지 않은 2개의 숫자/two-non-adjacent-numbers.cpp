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
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
        //    if(i==j)continue;
            mx=max(mx,arr[i]+arr[j]);
        }
    }
    cout<<mx;
    return 0;
}