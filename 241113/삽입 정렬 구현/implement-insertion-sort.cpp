#include <iostream>
using namespace std;
int arr[100],n;
void in_sor(){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    in_sor();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}