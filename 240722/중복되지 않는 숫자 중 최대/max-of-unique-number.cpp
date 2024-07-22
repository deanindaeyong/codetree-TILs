#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,arr[1000],max=-1;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        if(max<curr){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(curr==arr[j]){
                    cnt++;
                }
            }
            
            if(cnt==1){
                max=curr;
            }
        }
    }
    cout<<max;
    return 0;
}