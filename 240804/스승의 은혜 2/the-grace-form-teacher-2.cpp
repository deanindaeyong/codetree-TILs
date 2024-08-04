#include <iostream>
#include <algorithm>
using namespace std;
int n,b,arr[1000];
int present(int i,int j){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    int max=n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int cnt=n;

    while(cnt>0){
      //  cout<<cnt<<endl;
        int sum=0;
        for(int j=0;j<cnt-1;j++){
            sum+=arr[j];
        }
        sum+=0.5*arr[cnt-1];
       // cout<<sum<<" "<<cnt<<endl;
        if(sum<=b){
            break;
        }else cnt--;
    }
    cout<<cnt;
    return 0;
}
//10+8+6+4+2+2