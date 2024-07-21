#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100],count[10]={0,};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<10;i++){
        cout<<count[i]<<endl;
    }
    return 0;
}