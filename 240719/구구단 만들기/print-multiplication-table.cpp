#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int cnt=b;
    for(int i=1;i<=9;i++){
        cnt=b;
        for(int j=b;j>0;j-=a){
            cout<<cnt<<" * "<<i<<" = "<<cnt*i;
            cnt-=2;
            if(j-a>0)
            cout<<" / ";
        }
        cout<<endl;
    }
    return 0;
}