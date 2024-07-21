#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10],count[7]={0,};
    for(int i=0;i<10;i++){
        cin>>arr[i];
        count[arr[i]]++;
    }
    for(int i=1;i<=6;i++){
        cout<< i <<" - "<<count[i]<<endl;
    }
    return 0;
}