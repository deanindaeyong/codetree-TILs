#include <iostream>
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[1000]={0,},max_t=0,max=1,cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0 && arr[i]==arr[i-1]){
            cnt++;
            
        }else if(arr[i]!=arr[i-1]){
  
            max_t=cnt;
            cnt=0;
        }
        if(max_t>max){
            
            max+=max_t;
        
        }
    }
    cout<<max;
    return 0;
}