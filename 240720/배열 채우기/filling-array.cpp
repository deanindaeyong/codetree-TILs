#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[10];
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        cnt++;
        if(arr[i]==0){
            arr[i]={};
            --cnt;
            break;}
    }
    for(int i=cnt-1;i>=0;i--)
        cout<<arr[i]<<" ";
    return 0;
}