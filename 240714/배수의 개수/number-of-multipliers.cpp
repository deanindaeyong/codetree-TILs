#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt,cnt1;
    cnt=cnt1=0;
    for(int i=0;i<10;i++){
        cin>>n;
        if(n%3==0){
            ++cnt;
        }
        if(n%5==0){
            ++cnt1;
        }

    }
    cout<<cnt<<" "<<cnt1;
    return 0;
}