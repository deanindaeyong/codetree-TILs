#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,temp;
    cin>>a>>b;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%5==0)
        cnt+=i;
    }
    cout<<cnt;
    return 0;
}