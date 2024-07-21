#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}