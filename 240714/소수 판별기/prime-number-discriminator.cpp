#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    bool sfd =false;
    for(int i=2;i<n;i++){

        if(n%i==0){
            sfd=true;
        
        }
    }
    if(sfd){
        cout<<"C";
    }
    else cout<<"P";
    return 0;
}