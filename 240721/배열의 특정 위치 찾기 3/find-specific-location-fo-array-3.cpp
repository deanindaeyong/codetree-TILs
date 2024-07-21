#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100],sum=0,cnt=0;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0){
            cnt=i;
            break;
        }
    }
    sum=arr[cnt-1]+arr[cnt-2]+arr[cnt-3];
    cout<<sum;
    return 0;
}