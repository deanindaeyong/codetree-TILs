#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    cin>>arr[0]>>arr[1];
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=10){
            arr[i]=arr[i]%10;
        }

    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}