#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2!=0 && a%3==0)
        sum+=a;
    }
    cout<<sum;
    return 0;
}