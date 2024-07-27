#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,b,arr[200]={0,};

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            arr[j]++;
        }
    }
    int max=0;
    for(int i=0;i<200;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    cout<<max;
    return 0;
}