#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    bool sfd=true;
    for(int i=0;i<5;i++){
        cin>>a;
        if(a%3!=0){
            sfd=false;
        }
    }
    if(sfd==0)cout<<0;
    else cout<<1;
    return 0;
}