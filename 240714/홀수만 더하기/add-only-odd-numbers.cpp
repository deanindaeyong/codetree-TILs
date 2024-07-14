#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>n;
        if(n%2!=0 && n%3==0)
        sum+=n;
    }
    cout<<sum;
    return 0;
}