#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100],count[11]={0,};

    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0) break;
        if(arr[i]<10) continue;
        else count[arr[i]/10]++;
    }
    for(int i=100;i>0;i-=10){
        cout<< i<<" - "<< count[i/10]<<endl;
    }
    return 0;
}