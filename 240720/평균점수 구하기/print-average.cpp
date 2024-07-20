#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double n,arr[8],sum=0;
    for(int i=0;i<8;i++){
        cin>>n;
        arr[i]=n;
        sum+=arr[i];
    }
    cout<<sum/8;
    return 0;
}