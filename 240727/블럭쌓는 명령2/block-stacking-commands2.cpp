#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    int a,b;
    cin>>n>>k;
    int arr[n]={};
    
    for(int i=0;i<k;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            arr[j]+=1;
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}