#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x=n;
    while(true){
        int max=arr[0];
        int index=0;
        for(int i=1;i<x;i++){
            if(max<arr[i]){
                max=arr[i];
                index=i;
        }
        }
    
        cout<<index+1<<" ";
        if(index==0){
            break;
        } 
        x=index;
    }
    
    return 0;
}