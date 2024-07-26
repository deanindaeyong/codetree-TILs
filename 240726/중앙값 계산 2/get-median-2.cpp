#include <iostream>
#include <algorithm>
using namespace std;
int n,arr[100000*2];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    
    int cur=0,cnt=0;
   
    for(int i=0;i<n;i++){

        cin>>arr[i];
        sort(arr,arr+i+1);

        if(i%2==0){
            cout<<arr[i/2]<<" ";
        }
       
    }

    return 0;
}
// 15297461011
//12456