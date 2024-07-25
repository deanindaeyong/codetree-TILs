#include <iostream>
using namespace std;
int n,m,a,b;
int arr[100];
int fun(){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i-1];
    }
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cout<<fun()<<endl;
    }
    return 0;
}