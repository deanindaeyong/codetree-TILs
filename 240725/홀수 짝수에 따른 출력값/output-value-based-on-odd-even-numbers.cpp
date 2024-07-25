#include <iostream>
using namespace std;
int n;
int dep(int a){
    if(a==1){
        return 1;
    }
    else if(a==2)
        return 2;
    if(a%2==0)
        return dep(a/2)+a;
    if(a%2!=0)
        return dep(a-2)+a;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<dep(n);

    return 0;
}