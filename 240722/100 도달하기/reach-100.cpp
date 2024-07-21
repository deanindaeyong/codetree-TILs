#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    cin>>arr[1];
    arr[0]=1; cout<<arr[0]<<" "<<arr[1]<<" ";
    for(int i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
        if(arr[i]>=100)
        break;
    }
    return 0;
}