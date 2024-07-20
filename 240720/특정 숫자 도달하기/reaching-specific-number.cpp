#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100],n;
    int sum=0,cnt=0;
    for(int i=0;i<100;i++){
        cin>>n;
        arr[i]=n;
        if(arr[i]>=250) break;
        sum+=arr[i];
        cnt++;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    return 0;
}