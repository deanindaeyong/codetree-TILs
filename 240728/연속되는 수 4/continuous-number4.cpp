#include <iostream>
#include <algorithm>
using namespace std;
int n;

int main() {
    int arr[1001];
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0,ans=0;

    for(int i=0;i<n;i++){
        if(i>0 &&arr[i]>arr[i-1])
        cnt++;
        else cnt=1;
        ans=max(ans,cnt);
    }

    cout<<ans;
    return 0;
}