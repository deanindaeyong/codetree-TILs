#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    for(int i=0;i<100;i++){
        
        cin>>arr[i];
        if(arr[i]==0)
        break;
        if(arr[i]%2!=0){
            arr[i]+=3;
        }
        else arr[i]/=2;
        cout<<arr[i]<<" ";
    }
    return 0;
}