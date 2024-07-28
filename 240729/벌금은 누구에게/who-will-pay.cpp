#include <iostream>
using namespace std;
int n,m,k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m>>k;
    int arr[101]={0,},t;
    int x=-1;
    for(int i=0;i<m;i++){
        cin>>t;
        arr[t]+=1;
        for(int j=1;j<=n;j++){
            if(arr[j]>=k){
                x=j;
                cout<<x;
                return 0;
            }
        }
    }
    cout<<x;
    return 0;
}