#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int n;
    cin>>a>>n;
    int cnt=0,arr[2000];
    while(true){
        if(a<n){
            arr[cnt++]=a;
            break;
        }
        arr[cnt++]=a%n;
        a/=n;
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}