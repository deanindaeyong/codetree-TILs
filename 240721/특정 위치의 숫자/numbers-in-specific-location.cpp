#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,sum=0,arr[10];
   
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    sum=arr[2]+arr[4]+arr[9];
    cout<<sum;

    return 0;
}