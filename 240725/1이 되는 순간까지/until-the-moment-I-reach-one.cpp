#include <iostream>
using namespace std;
int n;
int one(int a){
    int cnt=0;
    if(a==1)
    return 0;
    if(a%2==0)
     a/=2;
    else a/=3;
    cnt++;
     return one(a)+cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<one(n);
    return 0;
}