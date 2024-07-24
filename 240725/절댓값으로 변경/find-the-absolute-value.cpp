#include <iostream>
using namespace std;
void abv(int n,int a[]){
    for(int i=0;i<n;i++){
        a[i]=abs(a[i]);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    abv(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}