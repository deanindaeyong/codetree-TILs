#include <iostream>
using namespace std;
int n,arr[100];
void bub(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            
            }
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bub();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}