#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,cnt=0,sum2=0,arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(i%2!=0){
            sum+=arr[i];
        }
        if(arr[i]%3==0){
            sum2+=arr[i];
            cnt++;
        }
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<(double)sum2/cnt;
    return 0;
}