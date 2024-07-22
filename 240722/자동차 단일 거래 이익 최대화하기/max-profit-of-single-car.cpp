#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n],cnt=0;
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i-1]>=arr[i]){
            cnt++;
        }
    }
    if(cnt==n-1){
        cout<<0;
        return 0;
    }
    while(true){
        int max=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp_max=arr[j]-arr[i];
                if(max<temp_max){
                    max=temp_max;
                }
                
            }
        }
        if(max!=0){
            cout<<max;
            break;
        }

    }
    return 0;
}