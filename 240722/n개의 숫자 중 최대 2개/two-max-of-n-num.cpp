#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n],cnt;
    cin>>arr[0];
    int max=arr[0],max2;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
            cnt=i;
        }
    }
   
    max2=arr[0];
    for(int i=0;i<n;i++){
        if(i==cnt){
            continue;
        }
        if(max2<arr[i]){
            max2=arr[i];
        }
    }
    cout<<max<<" "<<max2;
    return 0;
}