#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10],sume=0,sumo=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if((i+1)%2==0){
            sume+=arr[i];
        }
        else sumo+=arr[i];
    }
    cout<<sume-sumo;
    return 0;
}