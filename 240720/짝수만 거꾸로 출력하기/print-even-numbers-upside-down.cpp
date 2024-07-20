#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100],cnt=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0){arr[cnt]=x;cnt++;}
    }
    for(int j=cnt-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}