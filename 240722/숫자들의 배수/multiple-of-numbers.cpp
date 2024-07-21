#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100],cnt=0;
    cin>>arr[0]; cout<<arr[0]<<" ";
    for(int i=1;i<100;i++){
        arr[i]=(i+1)*arr[0];
    
        cout<<arr[i]<<" ";
        if(arr[i]%5==0)
        cnt++;
        if(cnt==2)
        break;
    }
    return 0;
}