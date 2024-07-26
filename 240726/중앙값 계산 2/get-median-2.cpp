#include <iostream>
using namespace std;
int n,arr[100000*2];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    
    int cur=0,cnt=0;
    for(int i=0;i<n;i++){
        cnt=i+1;
        cin>>arr[i];
        cur+=arr[i];
        if(i%2==0){
            cout<<cur/cnt<<" ";
        }
    }
    return 0;
}