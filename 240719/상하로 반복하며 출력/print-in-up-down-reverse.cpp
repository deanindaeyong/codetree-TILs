#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum,x;
    sum=n+1;
    for(int i=1;i<=n;i++){
        x=i;
       for(int j=1;j<=n;j++){
        
        cout<<x;
        x=sum-x;
       }
       cout<<endl;
    }

    return 0;
}