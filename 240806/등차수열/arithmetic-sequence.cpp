#include <iostream>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100],ans[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=1;k<=100;k++){
                if(k-arr[i]==arr[j]-k){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}