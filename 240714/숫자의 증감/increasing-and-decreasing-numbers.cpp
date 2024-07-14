#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char c;
    int n;
    cin>>c>>n;
    if(c=='A')
     for(int i=1; i<=n;i++)
     cout<<i<<" ";
    else
     for(int j=n;j>=1;j--)
     cout<<j<<" ";   
    return 0;
}