#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=0;
    while(1){

        if(n%2==0){
            n=n*3+1;
            cnt++;
        }
        else{
            n=n*2+2;
            cnt++;
        }
        if(n>=1000){
            break;
        }

    }
    cout<<cnt;
    return 0;
}