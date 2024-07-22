#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n],max=-1,cnt=0,x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
            cnt++;
        }
        else if(max==arr[i]){
            x=arr[i];
            cnt++;
            max=-1;
            
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            continue;
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}