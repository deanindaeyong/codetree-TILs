#include <iostream>

using namespace std;
int n,m;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int maxx=-1;

    for(int i=1;i<=n;i++){
        int sum=0;
        int x=i;
        for(int j=m;j>0;j--){
            sum+=arr[x];
            x=arr[x];
        }
        maxx=max(maxx,sum);
    }
    cout<<maxx;
    return 0;
}