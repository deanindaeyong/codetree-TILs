#include <iostream>
#include <algorithm>
using namespace std;
int n,arr[1000];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n*2);
    int sum=0;
    int max=arr[0]+arr[2*n-1];
    int index;

    for(int i=0;i<2*n;i++){
        int cur=arr[i]+arr[2*n-i-1];
        if(max<cur){
            max=arr[i]+arr[2*n-i-1];
            index=i;
        }
    }
    cout<<arr[index+1]+arr[index];
    return 0;

}

//123578
//012345