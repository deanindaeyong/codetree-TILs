#include <iostream>
using namespace std;
int n,arr[100];
void sel(){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }


}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sel();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}