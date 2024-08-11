#include <iostream>
#include <climits>
#define dif 17
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,arr[1000];
    cin>>n;
    int max_h=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        max_h=max(max_h,arr[i]);
    }
    
    int min_p=INT_MAX;
    for(int i=0;i<=max_h;i++){
        int cu_h=i;
        int sum=0;
        for(int j=0;j<n;j++){
            if(cu_h+17<arr[j]){
                int x=arr[j]-(cu_h+17);
                sum+=x*x;
            }else if(cu_h>arr[j]){
                sum+=(cu_h-arr[j])*(cu_h-arr[j]);
            }
        }
        min_p=min(min_p,sum);
        
    }
    cout<<min_p;
    return 0;
}