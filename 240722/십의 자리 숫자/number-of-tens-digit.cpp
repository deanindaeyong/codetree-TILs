#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100],count[10]={0,};
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0)
        break;
        if(arr[i]>=10){
            count[(arr[i]/10)]++;

        }
    }
    for(int i=1;i<10;i++){
        cout<<i<<" - "<<count[i]<<endl;
    }
    return 0;
}