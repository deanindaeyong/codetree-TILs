#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a%3==0 && a%2!=0){
            cout<<a<<endl;
        }
    }
    return 0;
}