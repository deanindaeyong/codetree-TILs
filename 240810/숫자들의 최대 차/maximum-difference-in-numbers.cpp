#include <iostream>
using namespace std;
int n,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxx=0;
    for(int i=1;i<=10000;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[j]>=i &&a[j]<=i+k){
                cnt++;
            }
        }
        maxx=max(maxx,cnt);
    }
    cout<<maxx;
    return 0;
}
//1 1+k